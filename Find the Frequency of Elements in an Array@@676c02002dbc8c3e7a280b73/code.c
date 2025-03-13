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
    int num[n];
    num[0] = 1;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                num[i] += 1;
            }
            else{
                num[i+1] = 1;
                i = j;
            }
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    int a = sizeof(num)/ sizeof(num[0]);
    printf("%d", a);
    // for(int i = 0; i<a; i++){
    //     printf("%d", num[i]);
    }
    return 0;
}