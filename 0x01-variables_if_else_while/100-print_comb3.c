#include <stdio.h>

/**
 * main - the entry point
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	int i, j;

	for (i = '0'; i < '8'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
