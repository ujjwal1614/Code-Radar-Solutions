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
    arr2[0] = 1;
    int vanshu = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[0] == arr[n-1])
            {
                arr2[0] = n;
            }
            if(arr[i] == arr[j]){
                arr2[vanshu] += 1;
            }
            else{
                vanshu += 1;
                arr2[vanshu] = 1;
                i = j;
            }
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i<num; i++){
        printf("%d ", arr2[i]);
    }
    return 0;
}