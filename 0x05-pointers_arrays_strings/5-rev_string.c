#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	char tmp;
	int i, len, len 1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++
	}

	len1 = len - 1;

	for (i = 0; 1 < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len1--] = tmp;
	}
}
