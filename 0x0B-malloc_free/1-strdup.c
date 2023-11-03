#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
    int i = 0, size = 0;
    char *m;

    if (str == NULL)
        return (NULL);

    while (str[size])
        size++;

    m = malloc(size * sizeof(*str) + 1);

    if (m == NULL)
        return (NULL);
    else
    {
        for (; i < size; i++)
            m[i] = str[i];
    }

    return (m);
}
