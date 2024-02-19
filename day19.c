#include <stdio.h>
#include <string.h>

int findFirstNonRepeatedChar(const char* str) {
    int index = -1;
    int len = strlen(str);

    if (len == 0) {
        printf("KHAAALI H\n");
        return -1;
    }

    for (int i = 0; i < len; ++i) {
        int count = 0; 
        for (int j = 0; j < len; ++j) {
            if (i != j && str[i] == str[j]) {
                count++;
                break; 
            }
        }

        if (count == 0) {
            index = i;
            break;
        }
    }

    if (index == len - 1) {
        printf("all characters are repeating\n");
    } else {
        printf("first non-repeating character is '%c' at index %d\n", str[index], index);
    }

    return index;
}

int main() {
    const char* inputString = "prathamforpratham"; 
    int result = findFirstNonRepeatedChar(inputString);

    return 0;
}
