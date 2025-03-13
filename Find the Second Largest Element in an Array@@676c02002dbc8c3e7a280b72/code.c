#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int ujjwal;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
        if(arr[i] > arr[j]){
            arr[i] = ujjwal;
            arr[i] = arr[j];
            arr[j] = ujjwal;
        }
    }
    }
    for(int i = 0; i<n; i++){
        for(int j = 1; j<n; j++){
            if(arr[0] == arr[j]){
                printf("-1");
                return 0;
            }
        }
        if(arr[i]>0){
        printf("%d ", arr[n-2]);
        return 0;
        }
        else{
        printf("%d ", arr[1]);
        return 0;
        } 
    }
    return 0;
}