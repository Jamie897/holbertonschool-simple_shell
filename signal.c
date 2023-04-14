#include "shell.h"
/**
 *my_signal - signal handler
 *@sig: signal to be handled
 *Return : 0
 */
#include <stdio.h>
#include <signal.h>

volatile int flag = 0;

void my_signal(int sig)
{
        printf("Caught signal %d\n", sig);
        flag = 1;
}

int main(void)
{
        signal(SIGINT, my_signal);
        while (1) {
                if (flag) {
                        printf("Exiting loop...\n");
                        break;
                }
        }
        return 0;
}
