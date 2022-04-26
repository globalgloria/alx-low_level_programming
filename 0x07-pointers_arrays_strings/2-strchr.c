#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: stringb to search
 * @c: char to find
 * Return: pointer to a first occurrence of the charact
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
