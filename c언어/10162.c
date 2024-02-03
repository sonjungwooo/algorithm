x#include <stdio.h>
 
int main() {
    int t;
    int a[] = { 300,60,10 };
    int b[3] = { 0 };
 
    scanf("%d", &t);
    if (t % 10 == 0) {
        for (int i = 0; i < 3; i++) {
            if (t >= a[i]) {
                t -= a[i];
                b[i]++;
                i--;
            }
            if (t == 0) break;
        }
        printf("%d %d %d", b[0], b[1], b[2]);
    }
    else printf("-1");
    return 0;
}