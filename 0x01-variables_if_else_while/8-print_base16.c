#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: numbers of base 16 followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);

}
