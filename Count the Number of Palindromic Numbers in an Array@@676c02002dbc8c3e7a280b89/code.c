#include<stdio.h>
int palindrome(int n, int arr[n], int remainder, int reversed, int count){
    for(int i = 0; i<n; i++){
        while(arr[i] != 0){
            remainder = arr[i] % 10;
            reversed = reversed*10 + remainder ;
            arr[i] = arr[i]/10;
        }
        if(arr[i] == reversed){
            count =count + 1;
        }
    }
}
int main(){
    int n, reversed = 0, count = 0;;
    int remainder = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    palindrome(n, arr[n], remainder, reversed, count);
    printf("%d", count);
    return 0;
}