#
# Fork-Exec example in Python
# Author: David Kerschbaumer
#

import os
import time 

def parent_process():
  print("Hello from parent process!")
  pid = os.fork()
  if pid == 0:
    # This code is running in the child process
    #time.sleep(5)
    while(1):
      print("-")
    os.execl('/bin/ls', 'ls', '-l') # Replace the current process with a new one
  else:
  # This code is running in the parent process
    print("Parent", os.getpid(), " here - my child process ID:", pid)
    time.sleep(2)
    print("Parent dying")

if __name__ == "__main__":
  parent_process()
