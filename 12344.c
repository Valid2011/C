#include <stdio.h>

int main() {
    int number = 7;
    int factorial = 1;
    int i = 1;

    // Calculate factorial using a while loop
    while (i <= number) {
        factorial *= i;
        i++;
    }

    // Print the result
    printf("Factorial of %d is %d\n", number, factorial);
    
    return 0;
}
