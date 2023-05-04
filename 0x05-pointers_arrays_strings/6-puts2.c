#include "main.h"

/* betty style doc for function main goes there */
/**
 * puts2- prints xters of s string
 * @str: is the string reference
 * Return: returns the value zero
 */

void puts2(char *str)

{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
