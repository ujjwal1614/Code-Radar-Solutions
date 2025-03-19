#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[n];
    int uniqueCount = 0;
    for(int i = 0; i < n; i++) {
        freq[i] = 0;
    }
    for(int i = 0; i < n; i++) {
        if(freq[i] == 0) {
            int count = 1;
            for(int j = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                    freq[j] = -1;
                }
            }
            freq[i] = count;
        }
    }
    int maximum = 0;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(freq[i] < freq[j]){
                maximum = j;
                i = j;
                break;
            }
            else{
                maximum = i;
            }
        }
    }
    
    for(int i = 0; i<n; i++){
        printf("%d ", freq[i]);
    }
    printf("    %d", maximum);

    return 0;
}