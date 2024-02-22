#include <stdio.h>

long fibonacciRecursive(int num) {
    if (num <= 1)
        return num;
    return fibonacciRecursive(num - 1) + fibonacciRecursive(num - 2);
}

int main() {
    int n = 9; 
    printf("%dth Fibonacci Number: %ld\n", n, fibonacciRecursive(n));
    return 0;
}
