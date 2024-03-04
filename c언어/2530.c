#include <stdio.h>

int main() {
    int a,b,c;
    int d;
    int result, result1, result2;
    scanf("%d %d %d", &a,&b,&c);
    scanf("%d", &d);
    c = d+c; 
    if (c >=60){
        b=c/60+b;
        result2 = c%60;
    }
    else {
        result2 = c;
    }
    if (b>=60) {
        result1 = b%60;
            a = b/60+a; 
        }
    else result1 = b;
    if (a>23) result = a%24;
    else result = a;
    printf("%d %d %d", result, result1, result2);
    return 0 ;
    
}