#include <stdio.h>

int main() {
    int n;
    int x,y;
    int q1=0;
    int q2=0;
    int q3=0;
    int q4=0;
    int axis=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d %d", &x, &y);
        if(x==0 || y ==0) axis++;
        else if(x>0 && y>0) q1++;
        else if(x<0 && y>0) q2++;
        else if(x<0 && y<0) q3++;
        else if(x>0 && y<0) q4++;
    }
    printf("Q1: %d\n",q1);
    printf("Q2: %d\n",q2);
    printf("Q3: %d\n",q3);
    printf("Q4: %d\n",q4);
    printf("AXIS: %d\n",axis);
    return 0;
}