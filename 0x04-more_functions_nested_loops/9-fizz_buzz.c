#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main-this includes a list of all prototypes
 * Return: returns the equivalent values
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}
	if (i < 100)
	printf(" ");
	}
	printf("\n");
	return (0);
}
