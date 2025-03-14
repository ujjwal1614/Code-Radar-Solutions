#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[n];
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
    int ujjwal;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(freq[i] < freq[j]){
                ujjwal = freq[i];
                freq[i] = freq[j];
                freq[j] = ujjwal;
            }
        }
    }
    int maxindex = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] > freq[maxindex]){
            maxindex = i;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(freq[i] > 0){
            if(freq[0] != freq[i]){
                printf("%d", arr[maxindex]);
                return 0;
            }
        }
    }
    }
    printf("-1");
    return 0;
}