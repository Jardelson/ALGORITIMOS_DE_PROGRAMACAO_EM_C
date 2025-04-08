// Problema: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, ...
// f(n) | Sequencia de Fibonacci  | Relação de Recorrência
/* 

f(0) | 0                          | --
f(1) | 1                          | --
f(2) | 1 = 1 + 0                  | f(1) + f(0)
f(3) | 2 = 1 + 0 + 1              | f(2) + f(1)
f(4) | 3 = 1 + 0 + 1 + 1          | f(3) + f(2)
f(5) | 5 = 1 + 0 + 1 + 1 + 2      | f(4) + f(3)
f(n) | f(n-1) + f(n-2)            |)
f(n) | ? = 1 + 0 + 1 + 1 + 0 + ...| f(n-1) + f(n-2)
*/
/*
definição recursiva:
f(n) = { if n == 0: 0
       { if n == 1: 1
       { if n > 1: f(n-1) + f(n-2
*/
#include <stdio.h>
int f(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return f(n - 1) + f(n - 2);
}
int main() {
    int n = 10;
    printf("f(%d) = %d\n", n, f(n));
    return 0;
}
