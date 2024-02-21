#include <stdio.h>
#include <stdlib.h>

int check(int n) {
    if(n==1000) return 0;
    int a[5]= {0};
    int idx = 0;
    while(n>0){
        a[idx] += n%10;
        n /= 10;
        idx++;
    }
    if((a[0]-a[1]) == a[1]-a[2]) return 1;
    else return 0;
}
int main() {
    int n;
    int ans=0;
    scanf("%d", &n);

    if (n<100){
        printf("%d", n);
        return 0;
    }
    else {
        ans = 99;
        for (int i=100; i<=n; i++){
            if (check(i))
                ans += 1;
        }
        printf("%d", ans);
    }
    return 0;
}