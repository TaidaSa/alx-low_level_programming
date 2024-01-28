#include "main.h"

/**
 * main - the entry point
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
    long long int i, n1 = 1, n2 = 2, n3;

    printf("%lld, %lld, ", n1, n2);

    for (i = 2; i < 50; ++i)
    {
        n3 = n1 + n2;
        printf("%lld, ", n3);
        n1 = n2;
        n2 = n3;
    }
    printf("\n");
}
