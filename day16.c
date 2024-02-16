#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "pratham";
    printf("Original String: %s\n", str);
    int len = strlen(str);
    for (int i = 0, j = len - 1; i <= j; i++, j--) {
        char c = str[i];
        str[i] = str[j];
        str[j] = c;
    }
    printf("Reversed String: %s", str);
    return 0;
}
