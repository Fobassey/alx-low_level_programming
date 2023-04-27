#include <main.h>
/* betty style doc for function main goes there */
/**
 * main-prints number zero to nine
 * @l: takes an integer
 * Return: returns the value zero
 */
int print_last_digit(int l);

{
	int n;

	n = l % 10;

	if (n < 48)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (0);
	}
}
