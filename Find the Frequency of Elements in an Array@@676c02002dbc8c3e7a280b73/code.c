#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    int ujjwal;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                ujjwal = arr[i];
                arr[i] = arr[j];
                arr[j] = ujjwal;
            }
        }
    }
    int num = 1;
    for(int i = 0; i<n-1; i++)
    {
        if(arr[i] != arr[i+1]){
            num += 1;
        }
    }
    int arr2[num];
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                arr2[i] += 1;
            }
            else{
                arr2[i+1] = 1;
                i = j;
            }
        }
    }
    arr[0] += 2;
    for(int i = 0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    for(int i = 0; i<num; i++){
        printf("%d", arr2[i]);
    }
    return 0;
}