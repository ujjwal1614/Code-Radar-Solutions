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
    for(int i = 0; i < scamcount - 1; i++) {
        if(scam[i] != scam[i + 1]) {
            num += 1;
        }
    }
    int arr2[num];
    int arr3[num];
    arr2[0] = 1;
    arr3[0] = scam[0];
    int maa = 1;
    
    for(int i = 1; i < scamcount; i++) {
        if(scam[i] != scam[i - 1]) {
            arr3[maa] = scam[i];
            maa += 1;
        }
    }
    int vanshu = 0;
    for(int i = 0; i < num; i++) {
        int count = 0;
        for(int j = 0; j < scamcount; j++) {
            if(arr3[i] == scam[j]) {
                count++;
            }
        }
        arr2[vanshu] = count;
        vanshu++;
    }
    for(int i = 0; i < num; i++) {
        printf("%d %d\n", arr3[i], arr2[i]);
    }
    return 0;
}

