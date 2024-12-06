#include <process_copy.h>

int blockcur(char *filename,int pronum){
	int blocksize=0;
	int fd = open(filename,O_RDWR);
	//返回文件大小
	int size = lseek(fd,0,SEEK_END);
	//printf("size %d\n",size);
	blocksize=size/pronum;
	//printf("b1 %d\n",blocksize);
	if(size%pronum!=0||blocksize==0) blocksize=blocksize+1;
	//printf("b2 %d\n",blocksize);
	return blocksize;
}
