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
    int scam[n];
    int scamcount = 0;
    for(int i = 0; i < n; i++) {
        if(freq[i] > 0) {
            scam[scamcount] = arr[i];
            scamcount += 1;
        }
    }
    // if(scamcount == 1){
    //     printf("-1");
    //     return 0;
    // }
    // else if(arr[0]>0){
    //     printf("%d ", scam[1]);
    // return 0;
    // }
    // else{
    //     printf("%d ", scam[scamcount - 2]);
    // return 0;
    // } 
    for(int i = 0; i<scamcount; i++){
        printf("%d ", scam[i]);
    }
    return 0;
}