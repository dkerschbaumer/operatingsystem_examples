//
// basic program to show race conditions using threads
// Author: David Kerschbaumer
//

#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>

// 1. compile: clang -Wall 07-race_condition1.c -o race -pthread
// 2. execute: ./race
// 3. execute many times and ask yourself why the output is not always the same

int GLOBAL_COUNTER = 0;


void* increaseCounter(void* thread_name)
{

  for(int i = 0; i < 3000; i++)
  {
      GLOBAL_COUNTER = GLOBAL_COUNTER + 1;
      printf("%s     %d\n", (char*)thread_name, GLOBAL_COUNTER);
  }
  return NULL;
}

int main()
{

  pthread_t threadA;
  pthread_t threadB;
  pthread_t threadC;

  pthread_create(&threadA, NULL, increaseCounter, "Thread A");
  pthread_create(&threadB, NULL, increaseCounter, "                Thread B");
  pthread_create(&threadC, NULL, increaseCounter, "                                 Thread C");


  pthread_join(threadA, NULL);
  pthread_join(threadB, NULL);
  pthread_join(threadC, NULL);

  return 0;
}