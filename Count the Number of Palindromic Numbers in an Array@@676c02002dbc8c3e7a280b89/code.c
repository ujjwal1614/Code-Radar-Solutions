#include<stdio.h>
int main(){
    int n, count = 0;
    int remainder = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++){
        int reversed = 0;
        while(arr[i] != 0){
            remainder = arr[i] % 10;
            reversed = reversed*10 + remainder ;
            arr[i] = arr[i]/10;
        }
        printf("%d  %d    ", reversed, arr[i]);
        if(arr[i] == reversed){
            count =count + 1;
        }
    }
    printf("%d", count);
    return 0;
}