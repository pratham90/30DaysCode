#include <stdio.h>

int main() {
    int limit, i;
    float a, sum = 0.0, max = 0.0, min;

    printf("Enter the number of elemets : ");
    scanf("%d", &limit);

    printf("Enter the numbers:\n");
    for (i = 0; i < limit; i++) {
        scanf("%f", &a);
        if (i == 0) {
            max = a;
            min = a;
        } else {
            if (a > max) {
                max = a;
            }
            if (a < min) {
                min = a;
            }
        }
        sum += a;
    }

    printf("\nThe sum of the numbers is: %f\n", sum);
    printf("The average of the numbers is: %f\n", sum / limit);
    printf("The maximum number is: %f\n", max);
    printf("The minimum number is: %f\n", min);

    return 0;
}
