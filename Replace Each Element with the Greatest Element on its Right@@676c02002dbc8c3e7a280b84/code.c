#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    if(n != 1){
    for(int i = 0; i<n-1; i++){
        int ujjwal = 0;
        for(int j = i+1; j<n; j++){
            if(arr[i] < arr[j]){
                break;
            }
            else if(arr[i] >= arr[j]){
                ujjwal = arr[i];
            }
        }
        printf("%d ", ujjwal);
    }
    }
    if(n == 1){
        printf("-1");
        return 0;
    }
    printf("-1");
    return 0;
}