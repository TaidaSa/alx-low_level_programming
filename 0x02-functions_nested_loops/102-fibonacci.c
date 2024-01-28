#include "main.h"

/**
 * main - the entry point
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	long int i, n1 = 1, n2 = 2, n3;

	printf("%ld, %ld, ", n1, n2);

	for (i = 2; i < 50; ++i)
	{
		n3 = n1 + n2;
		printf("%ld, ", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");
	return(0);
}
