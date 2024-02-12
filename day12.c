#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    
    int total = (n + 1) * (n + 2) / 2;

    for (int i = 0; i < n; i++) {
        total -= arr[i];
    }
    
    
    return total;
}

int main() {
    int arr[] = {3, 1, 0, 4, 6, 2}; 
    int n = sizeof(arr) / sizeof(arr[0]); 


    int missingNumber = findMissingNumber(arr, n - 1);

    printf("The missing number is: %d\n", missingNumber);

    return 0;
}
