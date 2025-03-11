#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    int num = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d\n", &arr[i]);
    }

    // for(int i = 0; i<n; i++){
    //     for(int j = 0; j<arr[i]; j++){
    //         if(arr[i] % j == 0){
    //             printf("0");
    //             return 0;
    //         }
    //     }
    //     num += 1;
    // }
    // printf("5d", num);
    return 0;
}