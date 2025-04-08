#include <stdio.h>
int main() {
    char string[50] = "Avaliacao 2";
    char *ptr = string;
    int i = 0;
    while (*(ptr + i) != '\0') {
        printf("string[%d]: %c\n", i, *(ptr + i));
        i++; 
    }

    return 0;
}

