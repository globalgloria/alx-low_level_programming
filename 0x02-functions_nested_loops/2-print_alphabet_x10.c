#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - main block
 * Description: ten times the alphabet in lowercase
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}	

}

