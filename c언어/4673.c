#include <stdio.h>

int d(int n){
    int a=n;
    while(n>0){
        a += n%10;
        n /= 10;
    }
    return a;
}
int main() {
    int a[10001] = {0};

    for(int n=1; n<=10000; n++){
        if(d(n)<=10000) a[d(n)] = 1;
    }
    for(int i=1; i<=10000; i++) {
        if (a[i]<=10000){
            if(a[i] == 0)
                printf("%d\n", i);
        }
    }

    return 0;
}
