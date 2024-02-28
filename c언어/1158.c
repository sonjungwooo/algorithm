#include<stdio.h>

int main() {
    int n, k;
    int a[5002] = {0};
    int q;
    scanf("%d %d", &n, &k);
    q = k;
    printf("<%d", q);
    a[q] = 1;
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<k; j++) {
            while(1) {
                q++;
                if(cur > n) q = 1;
                if(!a[q]) break;
            }
        }
        printf(", %d", q);
        a[q] = 1;
    }
    printf(">");
}