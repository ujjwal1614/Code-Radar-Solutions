#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 1; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            printf("%d", arr[i-1]);
        }
    }
}