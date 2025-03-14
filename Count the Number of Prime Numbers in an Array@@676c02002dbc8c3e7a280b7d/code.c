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
        for(int j = 2; j<arr[i]; j++){
            if(arr[i] % j == 0){
                freq[i] = -1;
                return 0;
            }
        }
        freq[i] = 1;
    }
    int count = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] > 0){
            count += 1;
        }
    }
    printf("%d", count);
    return 0;
}