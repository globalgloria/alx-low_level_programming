#include "main.h"

/**
 * print_line - print a line
 * @n: number of _ to be printed
 * Return: Always 0
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
