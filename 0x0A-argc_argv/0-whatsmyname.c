#include <stdio.h>
#include "main.h"

/* betty style doc for function main goes there */
/**
 * main- a function that prints argc, argv
 * @argc: is the number of argument
 * @argv: is an array of the elements to be compiled
 * Return: returns the value zero
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}

