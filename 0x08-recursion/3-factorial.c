#include "main.h"

/* betty style doc for function main goes there */
/**
 * factorial- a function that computes factorial of a number
 * @n: is the input
 * Return: returns the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
