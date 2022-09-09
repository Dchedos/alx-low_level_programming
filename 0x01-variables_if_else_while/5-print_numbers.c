#include <stdio.h>

/**
 *
 * main - Prints the numbers since 0to 9
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	char n;

	for (n = '0'; n< '9'; n++)
	{
		purchar(n);
	}

	putchar('\n');

	return (0);
}
