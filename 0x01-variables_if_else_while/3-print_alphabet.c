#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -main block
 * Description: Prints in lowercase and then uppercase
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z');
	{
		putchar (c);
		c++;
	}

	char c = 'A';

	while (c <= 'Z');
	{
		putchar (c);
		c++;
	}

	putchar ('.\n');
	return (0);

}
