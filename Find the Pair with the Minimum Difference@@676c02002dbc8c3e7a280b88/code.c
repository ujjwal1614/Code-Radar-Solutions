#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    int min = 0;
    int ujjwal;
    for(int i = 0; i < n-1 ; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                ujjwal = arr[i];
                arr[i] = arr[j];
                arr[j] = ujjwal;
            }
            
        }
    }
    for(int i = 0; i<n-1; i++){
        if((arr[i+1] - arr[i]) > min){
            min = i;
        }
    }
    printf("%d %d", arr[min], arr[min + 1]);

    
    return 0;
}