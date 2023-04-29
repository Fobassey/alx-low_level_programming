#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_square-this prints a square
 * @size: returns an integer
 * Return: returns the equivalent values
 */

void print_square(int size)

{
	int i, j;

	if (size <= 0)
	_putchar ('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
