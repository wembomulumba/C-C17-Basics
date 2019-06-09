#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/mman.h>
#include <unistd.h>

int main(int argc, char *argv[]) {

    int *p;
    int fd ;
    fd = open(argv[1], O_RDWR);
    p = mmap(0 , sizeof(int) , PROT_READ | PROT_WRITE , MAP_SHARED , fd , 0);

    (*p)++;

    printf("%d", munmap(p , sizeof(int)));

    close(fd);

    return 0;
}