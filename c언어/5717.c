#include <stdio.h>

int main() {
    int m,f,n;
    while (1) {
        scanf("%d %d", &m, &f);
        if (m==0 && f==0) break;
        n += (m+f);
        printf("%d \n", n);
        n=0;
    }
    return 0;
}