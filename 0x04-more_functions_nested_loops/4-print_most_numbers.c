#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_most_numbers- this does not print 2 and 4
 * Return: returns the equivalent values
 */
void print_most_numbers(void)

{
char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
		_putchar(i);
	}
	_putchar('\n');
}
