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
    int count = 0;
    for(int i = 0; i<n; i++){
        if(freq[i] != -1){
            scam[count] = freq[i];
            count += 1;
        }
    }
    int ujjwal;
    for(int i = 0; i<scamcount-1; i++){
        for(int j = i+1; j<scamcount; j++){
            if(scam[i] > scam[j]){
                ujjwal = scam[i];
                scam[i] =scam[j];
                scam[j] = ujjwal;
            }
        }
    }
    for(int i = 0; i<scamcount; i++){
        printf("%d ", scam[i]);
    }
    for(int i = 0; i<scamcount; i++){
        if(scam[i] == scam[i+1]){
            printf("-1");
        }
        else{
            printf("   %d", scam[1]);
            return 0;
        }
    }
    return 0;
}