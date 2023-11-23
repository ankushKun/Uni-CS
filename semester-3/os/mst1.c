#include <stdio.h>
#include <unistd.h>

int main() {
  pid_t pid = fork();
  if (pid < 0) {
    printf("Fork failed");
    return -1;
  }
  if (pid == 0) {
    printf("Child process pid %d\nParent process pid %d\n", getpid(),
           getppid());
  } else {
    printf("Parent process pid %d\nChild process pid %d\n", getppid(),
           getpid());
  }
  return 0;
}
