#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strlen - find the length of a string
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

