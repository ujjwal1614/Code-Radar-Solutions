#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int freq[n];
    for(int i = 0; i<n; i++){
        freq[i] = 0;
    }
    for(int i = 0; i<n; i++){
        if(arr[i] < 2){
                freq[i] = -1;
            }
        else{
            for(int j = 2; j<arr[i]; j++){
                if(arr[i] % j == 0){
                    freq[i] = -1;
                    break;
                }
            }
        }
    int count = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] == 0){
            count += 1;
        }
    }
    for(int i = 0; i<n; i++){
        printf("%d ", freq[i]);
    }
    // printf("%d", count);
    return 0;
}