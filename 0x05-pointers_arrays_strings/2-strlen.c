#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strlen- determines the length of a string
 * @s: is a pointer
 * Return: returns the value zero
 */

int _strlen(char *s)

{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i++);
}
