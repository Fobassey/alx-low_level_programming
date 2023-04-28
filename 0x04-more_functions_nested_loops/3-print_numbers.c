#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_numbers- this returns as void
 * @i: is an integer
 * Return: returns the equivalent values
 */

void print_numbers(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
