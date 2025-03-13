#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int ujjwal;
    for(int i = 0; i<n; i++){
        if(arr[i] > arr[i+1]){
            arr[i] = ujjwal;
            arr[i] = arr[i+1];
            arr[i+1] = ujjwal;
        } 
    }
    printf("%d", arr[n-2]);
    return 0;
}