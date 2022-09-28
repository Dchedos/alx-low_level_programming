#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolena
 */

int p1(char *s, int l)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
