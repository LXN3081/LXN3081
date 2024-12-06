#include <process_copy.h>
int pram_check(char * filename,int argc,int pronum){
	int n;
	n = access(filename,F_OK);
	if(n!=0) return 0;
	if(argc==3) return 2;
	else if(argc==4){
		if(pronum==0) return 2;
		return 1;
	}
	else return 0;
}
