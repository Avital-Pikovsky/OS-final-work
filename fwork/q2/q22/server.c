#include <signal.h>
#include <unistd.h>
#include <stdio.h>

int counter = 0;

void SIGINT_handler()
{
    counter++;
    //printf("count %d \n", counter);
}

void SIGUSR1_handler()
{
    printf("Num of SIGINT: %d \n", counter);
}

int main()
{
    printf("server pid: %d \n", getpid());

    signal(SIGINT, SIGINT_handler);

    signal(SIGUSR1, SIGUSR1_handler);

    while (1);
    return 0;
}
