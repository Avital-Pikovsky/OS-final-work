#include <signal.h>
#include <stdio.h>
#include <stdlib.h>


void signal_type(int pid, int num, int num_of_signals)
{
    if (num == 2) //SIGINT
    {
        for (int i = 0; i < num_of_signals; i++)
        {
            kill(pid, SIGINT); //2
        }
    }

    if (num == 10)//SIGUSR1
    {
        for (int j = 0; j < num_of_signals; j++)
        {
            kill(pid, SIGUSR1); //10
        }
    }
}

    int main(int argc, char *argv[])
    {
        if (argc != 4)
        {
            printf("Invalid input! \n");
            return 0;
        }

        int pid = atoi(argv[1]);

        int num = atoi(argv[2]);

        int num_of_signals = atoi(argv[3]);

        signal_type(pid, num, num_of_signals);

        //printf("pid %d... \n", pid);
return 0;
        
    }
