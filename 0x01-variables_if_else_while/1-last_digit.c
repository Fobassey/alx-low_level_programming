#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main- uses the modulo to get the last digit of a number
 * Return: returns the last digit of the number n
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
