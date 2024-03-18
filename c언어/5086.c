#include <stdio.h>
int main() {
    int a,b,max=0,min=0;
    while(1){
        scanf("%d %d", &a, &b);
        if (a==0 && b==0) break;
        if (a>b){
            max = a;
            min = b;
            if (max%min == 0) printf("multiple\n");
            else printf("neither\n");
        }
        else {
            max = b;
            min = a;
            if (max%min == 0) printf("factor\n");
            else printf("neither\n");
        }
    }
    return 0;
}