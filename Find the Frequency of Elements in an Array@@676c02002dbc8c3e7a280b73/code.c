#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Frequency array to store the count of each element
    int freq[n];
    for(int i = 0; i < n; i++) {
        freq[i] = 0;  // Initialize frequency array
    }

    // Count the frequency of each element in arr[]
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                freq[i] = -1;  // Mark this element as already processed
                break;
            }
        }
        if(freq[i] != -1) {
            for(int j = 0; j < n; j++) {
                if(arr[i] == arr[j]) {
                    freq[i]++;
                }
            }
        }
    }

    // Print the grouped numbers based on their frequency
    for(int i = 0; i < n; i++) {
        if(freq[i] != -1) {
            // Print the number 'freq[i]' times based on its frequency
            for(int j = 0; j < freq[i]; j++) {
                printf("%d ", arr[i]);
            }
        }
    }

    return 0;
}
