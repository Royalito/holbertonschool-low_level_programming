#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, plus by a new line
 *
 * @a: array to be accessed
 *
 * @n: amount of members of a[] to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%i", a[i]);
		}
		else
		{
				 printf(", %i", a[i]);
		}
	}
	printf("\n");
}
