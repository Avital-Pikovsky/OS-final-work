#include <stdio.h>
#include <unistd.h>
#include <sched.h>
#include <stdlib.h>

/**
#define SCHED_OTHER 0    //0
#define SCHED_FIFO 1     //1-99
#define SCHED_RR 2       //1-99
#define SCHED_BATCH 3    //0
#define SCHED_ISO 4      //0
#define SCHED_IDLE 5     //0
#define SCHED_DEADLINE 6 //0
**/

int set_policy(int policy, int priority)
{
  struct sched_param sp = {sp.sched_priority = priority};
  sched_setscheduler(0, policy, &sp);
  while(1);
  return 0;
}
int main(int argc, char *argv[])
{
  printf("pid: %d \n", getpid());
  int policy = atoi(argv[1]);
  int priority = atoi(argv[2]);


  set_policy(policy, priority);
  return 0;
}
