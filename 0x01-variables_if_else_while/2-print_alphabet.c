#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Write a program that prints the alphabet lowercase, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++
	}

	putchar('\n');
	return (0);
}
