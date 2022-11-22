//
// basic fork() program to show how a child process is created
// the parent waits for the child to finish
// Author: David Kerschbaumer
//

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>

// 1. compile and run
// 2. call ps -ef in other terminal
// 3. wait for the parent to exit normally

int main()
{

  pid_t child = fork();
  if(child == 0)
  {
    printf("                        child start with PID %d\n", getpid());
    for(int i = 0; i < 10; i++)
    {
      sleep(2);
      printf("                        child is running\n");
    }
  }
  else
  {
    printf("parent waiting\n");;
    wait(NULL);
    printf("parent dies after child finished\n");
  }



  return 0;
}