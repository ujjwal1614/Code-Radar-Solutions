#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", arr[i]);
    }
    int freq[n];
    for(int i = 0; i<n; i++){
        freq[i] = 0;
    }
    for(int i = 0; i<n; i++){
        if(freq[i] == 0){
            int count = 1;
            for(int j = i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    freq[j] = -1;
                    count += 1;
                }
            }
        }
        freq[i] = count;
    }
    for(int i = 0; i<n; i++){
        printf("%d", freq[i]);
    }
    return 0;
}