#include <stdio.h>

void print_times_table(int n) {
    // Check if n is within the valid range (0 to 15)
    if (n < 0 || n > 15) {
        printf("Invalid input. n must be between 0 and 15.\n");
        return;
    }

    // Print the n times table starting with 0
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            printf("%4d", i * j); // Use 4 spaces for better formatting
        }
        printf("\n");
    }
}

int main() {
    int n = 10; // Change this value to print a different times table
    print_times_table(n);
    return 0;
}
