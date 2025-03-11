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
        if(arr[i] = arr[i+1] -1){
            printf("%d ", arr[i]);
            printf("%d\n", arr[i+1]);
            num += 1;
        }
    }
    printf("%d", num);
    return 0;
}