//
// basic program to create a thread
// Author: David Kerschbaumer
//

#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* runFunction()
{
  printf("Hello, I'm another thread\n");
  return NULL;
}


int main()
{
  printf("Hello, I'm the first-Thread\n");
  pthread_t thread_id;
  pthread_create(&thread_id, NULL, runFunction, NULL);
  pthread_join(thread_id, NULL);
  return 0;
}