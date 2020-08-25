### To run the code:
To run the code it is necessary to run operations in the following order:

- Open two terminals, in one of the terminals run the makefile with the command: `make`

- After this command a executable file will be created:

set_policy

 - We will write the following command to run the program:
 
 ` sudo ./set_policy "new number of policy" "new number of priority"`
 
The number of the policiy we want to change to - **new number of policy**

The number of the priority we want to change to - **new number of priority**

A list of the policy-appropriate digits and what options does priority has:

> policy: sched_other 0, priority: 0

> policy: sched_fifo 1, priority: 1-99

> policy: sched_rr 2, priority: 1-99

> policy: sched_batch 3, priority: 0

> policy: sched_idle 5, priority: 0


The pid we change will be printed in the terminal.

 - In the second terminal we will write the following command:  `chrt -p "pid" `

 pid - The same one we got at the first terminal.
 
 - For example:

 `chrt -p 2345 `
 

We will see two lines in the same terminal that say we changed the policy and the priority,

and the new policy and priority of that pid.
