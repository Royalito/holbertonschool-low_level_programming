#include <stdio.h>

void print_times_table(int n) {
    int i, j;
    
    /* Check if n is within the valid range (0 to 15) */
    if (n < 0 || n > 15) {
        return; // If n is out of range, do nothing and return from the function.
    }

    for (i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;
    printf("Enter a number (0-15) to print its times table: ");
    scanf("%d", &n);

    print_times_table(n);

    return 0;
}
