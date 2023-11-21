#
# basic program to create a thread
# Author: David Kerschbaumer
#

import threading
import time

def my_function():
  time.sleep(2)
  print("Hello from thread!")

my_thread = threading.Thread(target=my_function) # Create a thread
my_thread.start() # Start the thread
my_thread.join() # Wait for the thread to finish (optional)

print("Main thread have finished.")
