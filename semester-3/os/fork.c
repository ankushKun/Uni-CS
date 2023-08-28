#include <stdio.h>
#include <unistd.h>

int main(){
	pid_t pid = fork();
	if(pid<0){
		error("Fork failed");
		return -1;
	}else if(pid==0){
		printf("Child process pid %d\nParent process pid %d\n", getpid(), getppid());
	}else{
		wait(5);
		printf("Parent process pid %d\nChild process pid %d %d\n", getppid(), getpid(), pid);
	}
	return 0;
}
