#include <stdio.h>

/**
 * main - Prints the numbers since 0 to 10
 *
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n < '10'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
