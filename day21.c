#include <stdio.h>


unsigned long factorial(int n) {
    return (n < 1) ? 1 : n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %lu", n, factorial(n));
    return 0;
}
