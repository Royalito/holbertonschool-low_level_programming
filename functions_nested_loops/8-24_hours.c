#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'imprimir hora'
 *
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int juanin, tulio;

	for (juanin = 0; juanin <= 23; juanin++)
	{
		for (tulio = 0; tulio <= 59; tulio++)
		{
			_putchar((juanin / 10) + '0');
			_putchar((juanin % 10) + '0');
			_putchar(':');
			_putchar((tulio / 10) + '0');
			_putchar((tulio % 10) + '0');
			_putchar('\n');
		}
	}
}
