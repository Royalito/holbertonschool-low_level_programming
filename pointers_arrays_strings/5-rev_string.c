#include <stdio.h>
/**
  * rev_string - Reverses a string
  * @pepe: The string to be modified
  *
  * Return: void
  */
void rev_string(char *pepe)
{
	int i, c, k;
	char *a, aux;

	a = pepe;

	while (pepe[c] != '\0')
	{
		c++;
	}

	for (k = 1; k < c; k++)
	{
		a++;
	}

	for (i = 0; i < (c / 2); i++)
	{
		aux = pepe[i];
		pepe[i] = *a;
		*a = aux;
		a--;
	}
}
