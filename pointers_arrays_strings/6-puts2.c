#include <stdio.h>
/**
 * puts2 - prints one char out of 2 of a string.
 * @lucho: input string.
 * Return: no return.
 */
void puts2(char *lucho)
{
	int count = 0;

	while (count >= 0)
	{
		if (lucho[count] == '\0')
		{
			putchar('\n');
			break;
		}
		if (count % 2 == 0)
			putchar(lucho[count]);
		count++;
	}
}
