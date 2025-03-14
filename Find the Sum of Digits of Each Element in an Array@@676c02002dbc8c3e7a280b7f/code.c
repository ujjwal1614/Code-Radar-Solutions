#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int remainder;
    int ujjwal, freq[n];
    for(int i =0; i<n; i++){
        freq[i] = 0;
    }
    for(int i = 0; i<n; i++){
        int sum = 0;
        while(arr[i] != 0){
        ujjwal = arr[i] % 10;
        sum += ujjwal;
        arr[i] /= 10;
        }
        freq[i] = sum;
    }
    for(int i = 0; i<n; i++){
        if(freq[i] >0){
        printf("%d ", freq[i]);}
        else{
            printf("%d ",  (2 * freq[i])/freq[i]);
        }
    }
    return 0;
}