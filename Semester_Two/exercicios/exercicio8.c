#include <stdio.h>

/* 
Definição recursiva:
p(n) = { p(n-1) x 2, n > 1}
       { 2         , n = 1}
*/
int p(int n) {
    if(n > 1) return p(n-1) * 2;
    if(n == 1) return 2;
    // exceção (n < 0)
    
}