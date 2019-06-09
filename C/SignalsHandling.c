#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

sig_atomic_t sigusrl_count = 0;

void handler (int signal_number){
    ++sigusrl_count;
}

int main() {

    struct sigaction sa;

    memset(&sa , 0 , sizeof(sa));
    sa.sa_handler = &handler;
    sigaction(SIGUSR1 , &sa , NULL);

    fprintf(stderr , "Running process... (PID =%d)\n", (int) getpid());

    /* Do some lengthy stuff here.     */

    printf("SIGUSR1 was raised %d times\n" , sigusrl_count);
    return 0;
}