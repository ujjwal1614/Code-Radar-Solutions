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
    scanf("%d", &k);
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == k){
                if(arr[i] == arr[j]){
                    printf("%d %d\n", arr[i], arr[j]);
                    return 0;
                }
                printf("%d %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}