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
    int maxindex = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] > freq[maxindex]){
            maxindex = i;
        }
    }
    int a = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] > 0){
            a += 1;
        }
    }
    if(a == 1){
        printf("%d", arr[0]);
        return 0;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(freq[i] > 0){
                if(freq[maxindex] > n/2){
                    if(freq[0] != freq[i]){
                        printf("%d", arr[maxindex]);
                    return 0;
                }
            }
        }
    }
    }
    // printf("-1");
    return 0;
}