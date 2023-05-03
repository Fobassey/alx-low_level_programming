#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_rev- prints the reverse string
 * @s: is a pointer
 * Return: returns the value zero
 */

void print_rev(char *s)

{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
