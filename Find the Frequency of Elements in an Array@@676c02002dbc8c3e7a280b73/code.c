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
            for(int j = 0; j < freq[i]; j++) {
                scam[scamcount] = arr[i];
                scamcount += 1;
            }
        }
    }
    int num = 1;
    for(int i = 0; i<n-1; i++)
    {
        if(scam[i] != scam[i+1]){
            num += 1;
        }
    }
    int arr2[num];
    int arr3[num];
    arr2[0] = 1;
    int maa = 1;
    int vanshu = 0;
    arr3[0] = arr[0];
    for(int i =0; i<n; i++){
            if(scam[i] != scam[i+1]){
                arr3[maa] = scam[i+1];
                maa += 1;
            }
        }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(scam[0] == scam[n-1])
            {
                arr2[0] = n-1;
            }
            if(arr[i] == scam[j]){
                arr2[vanshu] += 1;
            }
            else{
                vanshu += 1;
                arr2[vanshu] = 1;
                i = j;
            }
        }
    }
    for(int i = 0; i<num; i++){
        printf("%d %d\n", scam[i], arr2[i]);
    }
    return 0;
}
