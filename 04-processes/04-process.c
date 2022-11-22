//
// basic fork() program to show how a child process is created
// Author: David Kerschbaumer
//

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

// 1. compile and run
// 2. call ps -ef in other terminal
// 3. kill <PID>

int main()
{

  pid_t child = fork();
  printf("hello from both\n");
  if(child == 0)
  {
    printf("                        child start with PID %d\n", getpid());
    while(1)
    {
      sleep(2);
      printf("                        child is running\n");
    }
  }
  else
  {
    printf("parent alive %d\n", getpid());
    sleep(10);
    printf("parent dies\n");
  }
  return 0;
}