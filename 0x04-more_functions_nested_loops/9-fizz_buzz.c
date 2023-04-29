#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
 * main-this includes a list of all prototypes
 * @i: takes an integer
 * Return: returns the equivalent values
 */

int main(void);

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FIZZUZZ");
		}
		else if (i % 3 == 0)
		{
			printf("FIZZ");
		}
		else if (i % 5 == 0)
		{
			printf("BUZZ");
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
