#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest - destination string /  string to append
 * @src - source string / string to add
 * @n: number of byte of string to concatenate
 * Return: a pointer to the resulting string dest
 */
char *strncat(char *dest, char *src, int n);
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
