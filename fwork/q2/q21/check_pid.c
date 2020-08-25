#include <errno.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void checkPid(int pid)
{

    kill(pid, 0);

    switch (errno)
    {

    case EPERM:
        printf("Process %d exist but we have no permission \n", pid);
        break;

    case ESRCH:
        printf("Procces %d does not exists \n", pid);
        break;

    case 0:
        printf("Procces %d exists \n", pid);
        break;
    }
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Invalid input! \n");
        return 0;
    }
    int pid = atoi(argv[1]);
    printf("Check_pid %d... \n", pid);
    checkPid(pid);
    return 1;
}
