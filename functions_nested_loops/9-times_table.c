#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'imprime la tabla de multiplicar del nueve'
 *
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int juanin, tulio, c;

for (juanin = 0; juanin <= 9; juanin++)
{
for (tulio = 0; tulio <= 9; tulio++)
{
c = juanin * tulio;

if (tulio == 0)
{
_putchar(c + '0');
}
else if (c <= 9)
{
_putchar(32);
_putchar(c + '0');
}
else
{
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
if (b != 9)
{
_putchar(',');
_putchar(32);
}
}
_putchar('\n');
}
}
