//
// basic program to show race conditions using threads
// Author: David Kerschbaumer
//

#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/wait.h>

// 1. compile: clang -Wall 07-race_condition2.c -o race -pthread
// 2. execute: ./race
// 3. execute many times and ask yourself why the output is not always the same

int shared = 0;


void* makeCalculations()
{
  printf("Incrementing the shared variable...\n");
  for (int i = 0; i < 10000; ++i)
  {
      shared = shared + 1;
  }
  return NULL;
}

int main()
{

  pthread_t thread1;
  pthread_t thread2;
  pthread_t thread3;
  pthread_t thread4;

  printf("creating threads\n");
  pthread_create(&thread1, NULL, makeCalculations, NULL);
  pthread_create(&thread2, NULL, makeCalculations, NULL);
  pthread_create(&thread3, NULL, makeCalculations, NULL);
  pthread_create(&thread4, NULL, makeCalculations, NULL);
 
  printf("waiting for threads to finish\n");
  pthread_join(thread1, NULL);
  pthread_join(thread2, NULL);
  pthread_join(thread3, NULL);
  pthread_join(thread4, NULL);

  printf("%d\n", shared);
  return 0;
}