#include "main.h"
/* betty style doc for function main goes there */
/**
 * more_numbers-this prints numbers multiple times
 * @i: is an integer
 * @j: is an integer
 * Return: returns the equivalent values
 */

void more_numbers(void)

{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
