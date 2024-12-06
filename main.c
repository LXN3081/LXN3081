#include <process_copy.h>

int main(int argc,char ** argv){
	int t;
	//参数验证
	int pronum=atoi(argv[3]);
	t=pram_check(argv[1],argc,pronum);
	if(t==0){
		printf("参数非法\n");
		//return 0;
	}else if(t==2){
		pronum=5;
	}
	//算每个进程拷贝的大小
	int blocksize = blockcur(argv[1],pronum);
	//创建子进程
	t=process_create(argv[1],argv[2],pronum,blocksize);
	if(t==0){
		exit(0);
	}
	return 0;
}
