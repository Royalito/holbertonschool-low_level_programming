#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _putchar(char c) {
    return write(1, &c, 1);
}

void print_most_numbers(void) {
    int number;
    for (number = 0; number <= 9; number++) {
        if (number != 2 && number != 4) {
            _putchar(number + '0');
        }
    }
    _putchar('\n');
}

