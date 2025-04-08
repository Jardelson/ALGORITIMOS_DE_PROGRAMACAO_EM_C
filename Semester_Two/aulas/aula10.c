#include <stdio.h>

int p(int n) {
    if(n > 0) return p(n-1) + 1;
    if(n == 0) return 0;
    //exceção (n < 0)
    return 0;
}

int pIt(int n) {
    int andares =0;
    for (int i = 1; i <= n; i++) {
        andares += 1;
    }
    return andares;
}

int main() {
    int rec = p(3);
    int it = pIt(3);

    printf("rec: %d, it %d\n", rec, it);
    return 0;
}