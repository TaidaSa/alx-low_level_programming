#include "main.h"

/**
 * main - the entry point
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return(0);
}
