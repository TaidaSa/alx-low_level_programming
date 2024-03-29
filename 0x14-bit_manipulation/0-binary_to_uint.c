#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int x, power;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}

	for (power = 1, x = 0, i--; i >= 0; i--, power *= 2)
	{
		if (b[i] == '1')
		{
			x += power;
		}
	}

	return (x);
}
