#include <stdio.h>

int main() {
    int a, b, sum;

    // Prompt the user for input
    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    // Calculate the sum
    sum = a + b;

    // Display the result
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
