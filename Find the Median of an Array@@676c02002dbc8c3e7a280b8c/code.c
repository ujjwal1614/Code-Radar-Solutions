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
    if(n % 2 != 0){
        printf("%d", arr[(n-1)/2]);
        return 0; 
    }
    else{
        int a = (arr[n/2] + arr[n/2 - 1])/2;
        printf("%d", a);
    }
    return 0;
}