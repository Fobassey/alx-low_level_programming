#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strlen_recursion-a function that prints the length of a strg
 * @s: is the input
 * Return: returns the length
 */
int _strlen_recursion(char *s)
{
	int lngth = 0;

	if (*s)
	{
		lngth++;
		lngth = lngth + _strlen_recursion(s + 1);
	}
	return (lngth);
}

