#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Description: print alphabet in lowercase followed by a new line
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while ( c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
}
