#include <stdio.h>

int main(void) {
    int i = 5;
    int *p;
    p = &i;

    printf("&p: %p\n", (void*)&p);
    printf("p (&i endereço de i): %p\n", (void*)p);
    printf("*p (i - valor de i): %d\n", *p);


    *p = 7;
    printf("*p (i - valor de i após *p = 7): %d\n", *p);

    printf("Digite um novo valor para i: ");
    int result = scanf("%d", p);
    (void)result;

    printf("*p (i - valor de i após scanf): %d\n", *p);

    return 0;
}