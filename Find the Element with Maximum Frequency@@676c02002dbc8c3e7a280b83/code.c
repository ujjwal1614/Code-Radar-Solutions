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
    int maxindex = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] > freq[maxindex]){
            maxindex = i;
        }
    }
    
    for(int i = 0; i<n; i++){
        printf("%d ", freq[i]);
    }
    printf("    %d", maxindex);

    return 0;
}