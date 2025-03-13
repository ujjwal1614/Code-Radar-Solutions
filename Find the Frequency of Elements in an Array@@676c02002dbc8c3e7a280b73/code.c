#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i< n ; i++){
        scanf("%d", &arr[i]);
    }
    int ujjwal;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                ujjwal = arr[i];
                arr[i] = arr[j];
                arr[j] = ujjwal;
            }
        }
    }
    int num = 1;
    for(int i = 0; i<n-1; i++)
    {
        if(arr[i] != arr[i+1]){
            num += 1;
        }
    }
    int arr2[num];
    int arr3[num];
    arr2[0] = 1;
    int maa = 0;
    int vanshu = 0;
    for(int i =0; i<n; i++){
        arr3[maa] = arr[i];
        for(int j = i+1; j<n; j++){
            if(arr[i] != arr[j]){
                i = j;
                maa += 1;
            }
        }
    }
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[0] == arr[n-1])
            {
                arr2[0] = n-1;
            }
            if(arr[i] == arr[j]){
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
        printf("%d\n", arr3[num - i - 1]);
    }
    // for(int i = 0; i<num; i++){
    //     printf("%d %d\n", arr3[i], arr2[i]);
    // }
    return 0;
}