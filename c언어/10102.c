#include <stdio.h>
int main(){
    int v;
    scanf("%d", &v);
    char a[15];
    int as = 0;
    int bs= 0;
    for (int i=0; i<v; i++) {
        scanf("%s", a);
        if (a[i] == 'A') as+=1;
        else bs+=1;
    }
    if (as>bs) printf("A");
    else if (as<bs) printf("B");
    else printf("Tie");
    
}