#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On success 1.
 */

void _putchar(char c)
{
	return (write(1, &c, 1));
}
