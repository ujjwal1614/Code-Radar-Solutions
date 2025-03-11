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
    for(int j = 0; j<n-1; j++){
    if(arr[j] == 1)
    {
    for(int i = 0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            if(arr[i+1] != arr[i] + 1)
            {
                printf("%d", arr[i] + 1);
                return 0;
            
            }
        }
    }
    }
    else{
        printf("1");
        return 0;
    }
    }
    printf("1");
    return 0;
}