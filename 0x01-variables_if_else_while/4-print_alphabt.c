#include <stdio.h>

/**
 * main - the entry point
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
			putchar('\n');
		}
		}

	return (0);
}
