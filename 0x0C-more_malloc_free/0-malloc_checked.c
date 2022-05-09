$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ cat 0-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *c;
    int *i;
    float *f;
    double *d;

    c = malloc_checked(sizeof(char) * 1024);
    printf("%p\n", (void *)c);
    i = malloc_checked(sizeof(int) * 402);
    printf("%p\n", (void *)i);
    f = malloc_checked(sizeof(float) * 100000000);
    printf("%p\n", (void *)f);
    d = malloc_checked(INT_MAX);
    printf("%p\n", (void *)d);
    free(c);
    free(i);
    free(f);
    free(d);
    return (0);
}
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ ./a 
0x1e39010
0x1e39830
0x7f31f6c19010
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$ echo $?
98
$ amonkeyprogrammer@ubuntu:~/0x0b. more malloc, free$
