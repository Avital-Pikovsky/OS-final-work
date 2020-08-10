### To run the code:
To run the code it is necessary to run operations in the following order:
- Open the terminal and run the makefile with the command: `make`

- After this command, a executable file: dir_traversal is created.

- To check which files and folders exist, they must be created first, an example is attached:

> $‬‬ ‫‪mkdir‬‬ ‫‪dir‬‬

> ‫‪$‬‬ ‫‪touch‬‬ ‫‪dir/a‬‬ ‫‪dir/b‬‬

> ‫‪$‬‬ ‫‪ln‬‬ ‫‪-s‬‬ ‫‪a‬‬ ‫‪dir/sl‬‬

> ‫‪$‬‬ ‫‪mkdir‬‬ ‫‪dir/sub‬‬

> ‫‪$‬‬ ‫‪touch‬‬ ‫‪dir/sub/x‬‬
 
- To run the program, write the following command: `./dir_traversal dir  `

 
- Example of output:

> ‫‪D‬‬ ‫‪2327983‬‬ ‫‪dir‬‬

> ‫‪F‬‬ ‫‪2327984‬‬ ‫‪a‬‬

> ‫‪F‬‬ ‫‪2327985‬‬ ‫‪b‬‬

> ‫‪D‬‬ ‫‪2327988‬‬ ‫‪sub‬‬

> ‫‪F‬‬ ‫‪2327989‬‬ ‫‪x‬‬


