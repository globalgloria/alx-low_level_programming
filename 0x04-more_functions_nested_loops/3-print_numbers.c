#include "holberton.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
