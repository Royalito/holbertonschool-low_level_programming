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
int juanin;
int tulio;
int n;
int d1;
int d2;

for (juanin = 0; juanin <= 9; juanin++)
{
for (tulio = 0; tulio <= 9; tulio++)
{
n = juanin * tulio;

if (n > 9)
{
d1 = n / 10;
d2 = n % 10;
}
else
{
d1 = -16;
d2 = n;
}
if (tulio != 0)
_putchar(d1 + 48);
_putchar(d2 + 48);
if (tulio == 9)
{
_putchar(10);
}
else
{
_putchar(',');
_putchar(32);
}
}
}
}
