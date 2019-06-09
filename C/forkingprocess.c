#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

    pid_t child_id;

    printf("Main process id = %d (Parent PID = %d) \n", (int) getpid() , (int) getppid());

    child_id = fork();

    if (child_id !=0) {
        printf("Parent : child's process id = %d\n", child_id);       
    }
    else {
        printf("Child : my process id = %d\n" , (int) getpid());

    }

    return 0;
}