#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'Uno si es mayor a cero, cero si es igual cero y menos uno si no lo es'
 *
 *
 * Return: Always 0 (Success)
 */

int print_sign(int pepelucho)
{

if (pepelucho > 0)
{
_putchar('+');
return (1);
}
else if (pepelucho == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
