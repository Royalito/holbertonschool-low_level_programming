#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'imprimir el ultimo digito de un numero'
 *
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
n = n % 10;

if (n < 0)
{
_putchar((n - n * 2) + 48);
return (n - n * 2);
}
else
{
_putchar(n + '0');
}
return (n);
}
