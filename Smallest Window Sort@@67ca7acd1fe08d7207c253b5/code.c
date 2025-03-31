#include<stdio.h>
int findUnsortedSubarray(int arr[], int n){
    int myarr[n];
    for(int i = 0; i<n; i++){
        myarr[i] = arr[i];
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int ujjwal = arr[i];
                arr[i] = arr[j];
                arr[j] = ujjwal;
            }
        }
    }
    int count = 0;
    // for(int i = 0; i<n; i++){
    //     if(arr[i] != myarr[i]){
    //         count++;
    //     }
    // }
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i<n; i++){
        printf("%d ", myarr[i]);
    }
    // printf("%d\n", count);
}