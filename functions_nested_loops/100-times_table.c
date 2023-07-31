#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'imprime el alfabeto'
 *
 *
 * Return: Always 0 (Success)
 */

#include <stdio.h>

void imprimir_tabla_multiplicar(int n) {
    int i; 
    if (n < 0 || n > 15) {
        return; 
    }

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;
    printf("Ingresa un número (0-15) para imprimir su tabla de multiplicar: ");
    scanf("%d", &n);

    imprimir_tabla_multiplicar(n);

    return 0;
}
