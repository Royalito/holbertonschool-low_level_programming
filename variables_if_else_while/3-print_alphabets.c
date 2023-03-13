#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char newline = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar(newline);
	return (0);
}
