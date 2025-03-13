#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequency of each number in arr
    int fame[n]; // To store the frequency
    for (int i = 0; i < n; i++) {
        fame[i] = 0;  // Initialize frequency array
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                fame[i]++;  // Count frequency for repeated numbers
            }
        }
    }

    // Sort the array in descending order based on frequency
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Swap values
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                // Swap frequency values as well to keep the frequency in sync
                temp = fame[i];
                fame[i] = fame[j];
                fame[j] = temp;
            }
        }
    }

    // Now print the array with repeated numbers together
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < fame[i]; j++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}