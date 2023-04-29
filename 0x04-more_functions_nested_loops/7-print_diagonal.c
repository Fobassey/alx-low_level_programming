#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_diagonal-thisprints a diagonal line
 * @n: takes an integer
 * @i: takes an integer
 * @j: takes an integer
 * Return: returns the equivalent values
 */

void print_diagonal(int n)

{
	int i, j;

	if (n <= 0)
	_putchar ('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
