#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>

void char_at_a_time(const char * str){
    while (*str!= '\0'){
        putchar(*str++);
        fflush(stdout);
        usleep(50);
    }
}

int main() {
    if(fork() == 0)
        char_at_a_time("................");
    else 
        wait(NULL);
        char_at_a_time("||||||||||||||||");    
}