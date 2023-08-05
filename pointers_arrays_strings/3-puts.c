#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
