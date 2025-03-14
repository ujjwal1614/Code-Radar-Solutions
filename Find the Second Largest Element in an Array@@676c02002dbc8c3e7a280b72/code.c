// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     int ujjwal;
//     for(int i = 0; i<n-1; i++){
//         for(int j = i+1; j<n; j++){
//         if(arr[i] > arr[j]){
//             arr[i] = ujjwal;
//             arr[i] = arr[j];
//             arr[j] = ujjwal;
//         }
//     }
//     }
//     int count = 1;
//     for(int i = 0; i<n; i++){
//         for(int j = 1; j<n; j++){
//             if(arr[0] == arr[j]){
//                 count += 1;
//                 return 0;
//             }
//         }
//     }
//     if(count == n){
//         printf("-1");
//         return 0;
//     }
//     else if(arr[0]>0){
//         printf("%d ", arr[n-2]);
//     return 0;
//     }
//     else{
//         printf("%d ", arr[1]);
//     return 0;
//     } 
//     return 0;
// }
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
    for(int i = 0; i<n; i++){
        printf("%d ", freq[i]);
    }
    return 0;
}