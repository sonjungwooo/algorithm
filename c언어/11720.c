#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int qwer=0;
    scanf("%d", &n);
    
    char* num = (char*)malloc(sizeof(char)*(n+1));
    scanf("%s", num);
    for(int i=0; i<n; i++){
        qwer += num[i]-'0';
    }
    printf("%d", qwer);
    return 0;
    
}