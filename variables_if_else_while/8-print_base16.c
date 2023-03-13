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
char pepe;
char pepito;
char newline = '\n';

for (pepe = '0'; pepe <= '9'; pepe++)
putchar(pepe);
for (pepito = 'a'; pepito <= 'f'; pepito++)
putchar(pepito);
putchar(newline);
return (0);
}
