#include "main.h"

/**
 * print_diagonal: draws diagonal line on the terminal
 * @n:number of \ to be printed
 * Return: void
 */

void print_diagonal(int n);
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('\');
	}
	_putchar('\n');
}
