#include "main.h"

/* betty style doc for function main goes there */
/**
 *_pow_recursion- a function that computes the value of x raised to y
 * @x: is the input
 * @y: is the input
 * Return: returns the value of x raised to y
 */

int _sqrt_recursion(int n)
{
	int m; 

	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt_recursion(n, m + 1));
}
