#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    count = 0, ujjwal = 0;
    
    for(int i=0; i<n; i++){
        if(arr[i] % 2 == 0){
            ujjwal += 1;
        }
    }
    int arr2[ujjwal];
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 2 == 0){
            arr2[count] = arr[i];
            count += 1;
        }
    }
    for(int i = 0; i< ujjwal; i++){
        printf("%d", arr2[i]);
    }
        return 0;
}
