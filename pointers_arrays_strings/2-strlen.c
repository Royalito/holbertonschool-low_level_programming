#include <stdio.h>
/**
 * _strlen - returns the length of a string
 *
 * @pepe: string to be measured
 *
 * Return: amount of chars in string
 */

int _strlen(char *pepe)
{
	int length = 0;

	for (; *pepe; pepe++)
	{
		length++;
	}
	return (length);
}
