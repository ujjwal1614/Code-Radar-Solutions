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
    int count = 0, ujjwal = 0;
    
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
    int divanshu;
    for(int i = 0; i< ujjwal-1; i++){
        for(int j = i+1; j<ujjwal; j++){
            if(arr2[i] < arr2[j]){
                divanshu = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = divanshu;
            }
        }
    }
    printf("%d", arr2[1]);
        return 0;
}
