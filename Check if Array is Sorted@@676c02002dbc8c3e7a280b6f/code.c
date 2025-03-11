#include<stdio.h>
int main(){
    int n;
    int myarr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &myarr[i]);
        printf("%d", myarr[i]);
    }
    return 0;
}