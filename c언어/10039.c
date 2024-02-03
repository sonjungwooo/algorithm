#include <stdio.h>

int main() {
    int a[10];
    int result = 0;
    for (int i=0; i<5; i++) {
        scanf("%d", &a[i]);
        if (a[i] < 40) result += 40;
        else result += a[i];
    }
    printf("%d", result/5);
    return 0; 
}