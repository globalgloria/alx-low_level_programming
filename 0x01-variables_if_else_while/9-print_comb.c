#include <stdlib.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combination of a single-digit number
 * Return: 0
 */
int main(void)
{
	int c = '48';

	while (c < 57)
	{
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return(0);
}
