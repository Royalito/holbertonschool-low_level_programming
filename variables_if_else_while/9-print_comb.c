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
int counter = 0;

while (counter < 10)
{
putchar(counter + '0');
if (counter  < 9)
{
putchar(',');
putchar(' ');
}
counter++;
}
putchar('\n');

return (0);
}
