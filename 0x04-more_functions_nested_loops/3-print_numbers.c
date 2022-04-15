#include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
