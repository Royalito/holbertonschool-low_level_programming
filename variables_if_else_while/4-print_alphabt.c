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
	char pepe;
	char newline = '\n';

	for (pepe = 'a'; pepe <= 'z'; pepe++)
	{
		if (pepe == 'e' || pepe == 'q')
			continue;
		putchar(pepe);
	}
	putchar(newline);
	return (0);
}
