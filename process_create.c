#include <process_copy.h>
int process_create(const char * srcfile,const char * destfile,int pronum,int blocksize){
	int i = 0;
	int sum=0;
	int temp=blocksize;
	int temp2=0;
	//printf("blocksize %d\n",blocksize);
	while(temp>0){
		temp=temp/10;
		sum++;
	}
	char str[sum+1];
	sprintf(str,"%d",blocksize);
	//printf("%s\n",str);
	pid_t zpid;
	for(i=0;i<pronum;i++){
		zpid = fork();
		if(zpid==0)
			break;
	}
	if(zpid>0){
		int a = process_wait();
	}else if(zpid==0){
		//printf("i = %d\n",i);
		temp2=i*blocksize;
		sum=0;
		while(temp2>0){
			temp2=temp/10;
			sum++;
		}
		char str2[sum+1];
		sprintf(str2,"%d",i*blocksize);
		execl("/home/colin/new20240318/process/PROCESS_COPY/mod/copy","copy",srcfile,destfile,str,str2,NULL);
	}else{
		perror("fork call failed");
		return 0;
	}
	return 1;
}
