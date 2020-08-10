### To run the code:
To run the code it is necessary to run operations in the following order:

- Open two terminals, in one of the terminals run the makefile with the command: `make`

- After this command, two executable files will be created:

1.server

2.client
 
-  In the first terminal we will write the following command to run the server executable file:

 `./server `
  
After this command the server's pid will be printed on the screen,
that way we will know what to run in the next command.

- In the second terminal we will write the following command to run the client executable file:

 `./client "number of the server pid" "number of the signal (2 or 10)" "number of the signals" `
  
We will first run the command with SIGINT(2) to count the signals
And then we will run the command with SIGUSR1(10) to print how many signals were received in the first run.

- For example:

 `./client <server pid> 2 1000 `
 
 `./client <server pid> 10 1 `
 
