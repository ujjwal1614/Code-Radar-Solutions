#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] < arr[j]){
                break;
            }
        }
        printf("%d ", arr[i]);
    }
    printf("%d", arr[n-1]);
    if(n == 1){
        printf("%d", arr[0]);
    }
    return 0;
}