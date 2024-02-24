#include <stdio.h>

int main() {
    int a[10];
    for (int i=0;i<9;i++) scanf("%d\n", &a[i]);
    int max = a[0];
    for (int i=0; i<9; i++){
        if (max<a[i]) max = a[i];
    }
    printf("%d\n", max);
    for (int i=0; i<9; i++) {
        if (max == a[i]){
             printf("%d", i+1);
            break;
        }
    }
    return 0;
}