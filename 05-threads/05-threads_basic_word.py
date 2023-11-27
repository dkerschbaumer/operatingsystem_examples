#
# basic microsoft word simulator program
# one thread prints autocorrect while the other reads the input
# Author: David Kerschbaumer
#
import threading
import time

def autocorrect(): # a thread that simulates auto correction
  while(True):
    print("autocorrecting ")
    time.sleep(2)

def read_input(): #  a thread that reads your input and prints it
  while(True):
    user_input = input()
    print("Your input: ", user_input)
    if(user_input == 'q'): # quit program using 'q'
      break
  print("read input thread finish")

input_thread = threading.Thread(target=read_input) # Create a thread
autocorrect_thread = threading.Thread(target=autocorrect) # Create a thread
autocorrect_thread.daemon = True # daemon means, it exits when program exits
autocorrect_thread.start() 
input_thread.start()

input_thread.join() # Wait for the thread to finish

print("Main thread have finished.")
