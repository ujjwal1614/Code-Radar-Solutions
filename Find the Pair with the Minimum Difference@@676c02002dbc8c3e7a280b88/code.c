#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n ; i++){
        scanf("%d", &arr[i]);
    }
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
    int min;
    for(int i = 1; i<n-1; i++){
        if((arr[i+1] - arr[i]) < (arr[1] - arr[0])){
            min = i;
        }
    }
    if(n == 1){
        printf("-1");
        return 0;
    }
    printf("%d %d", arr[min], arr[min + 1]);

    
    return 0;
}