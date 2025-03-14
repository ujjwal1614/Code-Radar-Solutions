#include<stdio.h>
int main() {
    int num, target;
    scanf("%d", &num);
    int arr[n];
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    for(int i = 0; i<num; i++){
        if(arr[i] == target){
            print("%d", i);
        }
    }
    return 0;
}