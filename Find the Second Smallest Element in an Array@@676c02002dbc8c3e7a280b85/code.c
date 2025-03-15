#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[n];
    for(int i = 0; i<n; i++){
        freq[i] = arr[i];
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                freq[j] = -1;
            }
        }
    }
    int scamcount = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] != -1){
            scamcount += 1;
        }
    }
    int scam[scamcount];
    for(int i = 0; i<n; i++){
        if(freq[i] != -1){
            scam[i] = freq[i];
        }
    }
    // int ujjwal;
    // for(int i = 0; i<scamcount-1; i++){
    //     for(int j = i+1; j<scamcount; j++){
    //         if(scam[i] > scam[j]){
    //             ujjwal = scam[i];
    //             scam[i] =scam[j];
    //             scam[j] = ujjwal;
    //         }
    //     }
    // }
    printf("%d\n", scamcount);
    for(int i = 0; i<n; i++){
        printf("%d ", scam[i]);
    }
    return 0;
}