#include "main.h"
/* betty style doc for function main goes there */
/**
 * _strcpy- copies a string
 * @dest: is a pointer
 * @src: is a pointer
 * Return: returns the value zero
 */

char *_strcpy(char *dest, char *src)

{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}
