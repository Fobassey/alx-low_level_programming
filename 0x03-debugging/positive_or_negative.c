#include "main.h"
/* more headers goes there */
/* betty style doc for function main goes there*/
/**
 * main- This executes if stmt
 * Return: returns the value of n
 */

void positive_or_negative(int n)

{

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
}
