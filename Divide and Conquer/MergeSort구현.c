#include <stdio.h>

void merge(int arr[], int s, int mid, int e){
    int t = s;
    int j = mid+ 1;
    int k = s;
    int tmp[8] = {0};
    while (t<= mid && j<= e){
        if (arr[t] > arr[j]) tmp[k++] = arr[j++];
        else tmp[k++] = arr[t++];
    }
    int n = (t>mid) ? j:t;
    for (int i=k; i<=e; i++) tmp[i] = arr[n++];
    for (int i=s; i<=e; i++) arr[i] = tmp[i];
    return;
}


void mergesort(int arr[], int s, int e) {
    int mid = (s+e)/2;
    if(s<e){
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);
    merge(arr, s, mid, e);
    }
    return;
}

int main(){
    int arr[8] = {4,2,3,1,6,5,8,7};
    int s=0,e=7;
    mergesort(arr, s,e);
   
    for (int i=0; i<8; i++) {
        printf("%d", arr[i]);
    }
}