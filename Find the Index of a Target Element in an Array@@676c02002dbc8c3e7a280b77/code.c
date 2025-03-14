#include<stdio.h>
int main() {
    int num, target;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            print("%d", i);
        }
    }
    return 0;
}