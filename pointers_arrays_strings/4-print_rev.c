#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line, to stdout
 *
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	char *st;

	st = s;
/*
 * adapting code form _strlen
 * will it eventually be defined in other file??
 * easier to just do:
 * int i = (_strlen(s) -1);
 */
	for (; *st; st++)
	{
		i++;
	}
	i -= 1;
/* end _strlen mimicry, use its value to drive next loop */
	for (; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
