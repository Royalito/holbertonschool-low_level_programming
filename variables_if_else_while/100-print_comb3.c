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
int pepito;
int pepe;
int newline = 10;
pepito = 48;
while (pepito <= 57)
{
pepe = 48;
while (pepe <= 57)
{
if (pepito < pepe)
{
putchar (pepito);
putchar (pepe);
if (!(pepito == 56 && pepe == 57))
{
putchar (',');
putchar (32);
pepe++;
}
else
pepe++;
}
else
{
pepe++;
continue;
}
}
pepito++;
}
putchar (newline);
return (0);
}
