#include<stdio.h>
int main()
{
    int n;
    int myarr[n];
    int myarr2[] = {};
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &myarr[i]);
    }
    for(int i=0; i<n; i++)
    {
       myarr2[i] = myarr[i]; 
    }
    for(int i=0; i<n-1; i++)
    {
       if(myarr[i] > myarr[i+1])
       {
       printf("Not Sorted");
       return 0;
       }
    }
    printf("Sorted");
    return 0;
}