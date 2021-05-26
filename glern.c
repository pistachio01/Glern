#include <stdio.h>
#include <unistd.h>
int main()
{
    printf("hello\n");
    printf("hello\n");
    pid_t i = fork();
    return 0;
}
