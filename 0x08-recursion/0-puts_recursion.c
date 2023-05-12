#include "main.h"

/* betty style doc for function main goes there */
/**
 * _puts_recursion-a function that prints a string
 * @s: is the input
 * Return: returns the value zero
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
