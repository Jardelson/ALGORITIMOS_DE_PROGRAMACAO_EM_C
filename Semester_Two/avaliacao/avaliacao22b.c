#include <stdio.h>

int main() {
    char str[] = "Exercicio de APC II";
    char *ptr = str; 
    char *end_ptr = ptr;

    while (*end_ptr != '\0') {
        end_ptr++;
    }
    int num_caracteres = end_ptr - ptr;
    printf("O número de caracteres na string é: %d\n", num_caracteres);

    return 0;
}
