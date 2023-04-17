#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: 'imprime el alfabeto diez veces'
 *
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int tulio;
char juanin;
for (tulio = 0; tulio < 10; tulio++)
{
for (juanin = 'a'; juanin <= 'z'; juanin++)
{
_putchar(juanin);
}
_putchar ('\n');
}
}
