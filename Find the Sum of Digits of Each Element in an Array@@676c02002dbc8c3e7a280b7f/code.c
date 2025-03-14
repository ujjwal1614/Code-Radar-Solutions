#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int remainder;
    int ujjwal, sum = 0;
    for(int i = 0; i<n; i++){
        while(arr[i] != 0){
        ujjwal = arr[i] % 10;
        sum += ujjwal;
        arr[i] /= 10;
        }
    }
    printf("%d", sum);
    return 0;
}