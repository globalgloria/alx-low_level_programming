#include "main.h"

/**
 * print_most_numbers - 0 t0 9, except 2 and 4
 * Return: the printed numbers
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}

		i++;
	}
			
	_putchar('\n')
}
		

