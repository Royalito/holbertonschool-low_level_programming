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
int pep;
int pepi;
int pepe;
int newline = 10;

pep = 48;
while (pep <= 57)
{
pepi = 48;
while (pepi <= 57)
{
pepe = 48;
while (pepe <= 57)
if (pep < pepi && pepi < pepe)
{
putchar(pep);
putchar(pepi);
putchar(pepe);
if (!(pep == 55 && pepi == 56 && pepe == 57))
{
putchar(',');
putchar(32);
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
pepi++;
}
pep++;
}
putchar(newline);
return (0);
}
