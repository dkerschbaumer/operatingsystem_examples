//
// program creating many threads and all threads access a global variable
// Author: David Kerschbaumer
//

#include <stdio.h>
#include <sys/types.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/syscall.h>

int GLOBAL_VARIABLE = 0;

void* runFunction()
{
  sleep(20);
  GLOBAL_VARIABLE++;
  pthread_t thread_id = syscall(SYS_gettid);
  printf("Hello, I'm thread %lu - my variable is %d\n", thread_id, GLOBAL_VARIABLE);

  return NULL;
}

 
int main()
{
  printf("Hello, I'm the main-Thread\n");

  pthread_t ids[100];
  for(int i = 0; i < 100; i++)
  {
    pthread_create(&ids[i], NULL, runFunction, NULL);
  }


  for(int i = 0; i < 10; i++)
  {
    pthread_join(ids[i], NULL);
  }

  return 0;
}