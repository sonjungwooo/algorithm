// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n,k;
//     scanf("%d %d", &n,&k);
//     int* dir = (int*)calloc(n,sizeof(int));
    
//     for(int i=1; i<=n; i++){
//         if(n%i == 0) *(dir+(i-1)) = i;
//     }
//     printf(%d", *(dir+(k-1)));
    
//     free(dir);
//     return 0;
// }

#include <stdio.h>
 
int main() { 
    int n, k;
    int cnt = 0;
    int i;
    scanf("%d %d", &n, &k);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
        if (cnt == k) break;
    }
    if (i <= n) printf("%d", i);
    else printf("0");
    return 0;
}