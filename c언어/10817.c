#include <stdio.h>

int main() {
    int a,b,c;
    
    scanf("%d %d %d", &a, &b, &c);
    if (a>=b && a>=c) {
        if (b>=c) printf("%d", b);
        else if (c>=b) printf("%d", c);
    }
    else if (b>=a && b>=c) {
        if (a>=c) printf("%d", a);
        else if (c>=a) printf("%d", c);
    }
    else if (c>=a && c>=b) {
        if (a>=b) printf("%d", a);
        else if (b>=a) printf("%d", b);
    }
    return 0;
}