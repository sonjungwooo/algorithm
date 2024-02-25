#include <stdio.h>

int main() {
    int n,y,k;
    int a=0;
    int b=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for (int j=0; j<9; j++) {
            scanf("%d %d", &y,&k);
            a+=y;
            b+=k;
        }
        if (a>b) printf("Yonsei \n");
        else if (a<b) printf("Korea \n");
        else if (a=b) printf("Draw \n");
    }
    return 0;
}