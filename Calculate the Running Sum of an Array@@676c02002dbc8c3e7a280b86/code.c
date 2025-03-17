#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", arr[i]);
    }
    int arr2[n];
    for(int i = 0; i<n; i++){
        arr2[i] = 0;
    }
    for(int i =0; i<n; i++){
        for(int j = 0; j<=i; j++){
            arr2[i] = arr[j];  
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}