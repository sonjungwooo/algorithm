#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d", &n,&m);
    
    int** num = (int**)malloc(sizeof(int*)*n);
    for (int i=0; i<n; i++) 
        num[i] = (int*)malloc(sizeof(int)*m);
    int** num1 = (int**)malloc(sizeof(int*)*n);
    for (int i=0; i<n; i++) 
        num1[i] =(int*)malloc(sizeof(int)*m);
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            scanf("%d", &num[i][j]);
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++)
            scanf("%d", &num1[i][j]);
    }
    
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            printf("%d ", num[i][j]+num1[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<n; i++){
        free(num[i]);
        free(num1[i]);
    }
    free(num);
    free(num1);

    return 0;
    
}