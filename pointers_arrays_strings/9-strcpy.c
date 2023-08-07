#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: string to receive char variables
 *
 * @src: string source of char variables
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length;
	char *st;

	st = src;
	for (length = 0; *st; st++)
	{
		length++;
	}
	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
