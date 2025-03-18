#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 1;
    scanf("%d", &k);
    for(int i = 0; i<n; i++){
        if(arr[i] != arr[i+1]){
            count += 1;
        }
    }
    int ujjwal = 1;
    int arr2[count];
    arr2[0] = arr[0];
    for(int i = 0; i<n; i++){
        if(arr[i] != arr[i+1]){
            arr2[ujjwal] = arr[i+1];
        }
    }
    for(int i = 0; i<count; i++){
        printf("%d ", arr2[i]);
        // for(int j = i+1; j<n; j++){
        //     if(arr2[i] + arr2[j] == k){
        //         printf("%d %d\n", arr2[i], arr2[j]);
        //     }
        // }
    }    
    return 0;
}