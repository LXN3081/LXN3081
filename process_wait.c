#include <process_copy.h>
int process_wait(void){
	pid_t zpid;
	while((zpid = waitpid(-1,NULL,WNOHANG))!=-1){
	}
	return 0;
}
