#include <stdio.h>

/**
 * main - print the first 98 fibonacci
 * Return: always (0)
 */

int main() 
{
    int i

    int t1 = 0, t2 = 1;

    int nextTerm = t1 + t2;

    n = 98;

    printf("Fibonacci Series: %d, %d, ", t1,

    for (i = 3; i <= n; ++i) 
    {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    return 0;
}
