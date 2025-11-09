#include <stdio.h>

int main() {
    int a = 10, b = 3;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);     // integer division
    printf("Modulus: %d\n", a % b);      // remainder

    a++;
    printf("Increment a: %d\n", a);

    b--;
    printf("Decrement b: %d\n", b);

    return 0;
}
