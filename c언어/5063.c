#include <stdio.h>

int main() {
    int n;
    int r,e,c;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &r,&e,&c);
        if ((r+c)<e) printf("advertise\n");
        else if ((r+c)>e) printf("do not advertise\n");
        else printf("does not matter\n");
    }
    return 0;
}