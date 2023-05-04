#include "main.h"

/* betty style doc for function main goes there */
/**
 * rev_string- prints a string in rev
 * @s: is a pointer pointing to a string
 * Return: returns the value zero
 */

void rev_string(char *s)

{
	int lth, z, half;
	char temp;

	for (lth  = 0; s[lth] != '\0'; lth++)
	z = 0;
	half = lth / 2;

	while (half--)
	{
		temp = s[lth - z - 1];
		s[lth - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}



