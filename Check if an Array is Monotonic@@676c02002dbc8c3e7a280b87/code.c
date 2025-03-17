#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int ujjwal;
    int arr2[n];
    for(int i = 0; i<n; i++){
        if(arr[0] <= arr[1]){
            if(arr[i] > arr[i+1]){
                printf("NO");
                return 0;
            }
        }
    }
    for(int i = 0; i<n; i++){
        if(arr[0] >= arr[1]){
            if(arr[i] < arr[i+1]){
                printf("NO");
                return 0;
            }
        }
    }
    printf("YES");
    return 0;
}