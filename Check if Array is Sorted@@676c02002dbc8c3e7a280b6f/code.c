#include<stdio.h>
int main()
{
    int n;
    int myarr[n];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &myarr[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(myarr[i] > myarr[j])
            {
                printf("Not Sorted");
                return 0;
            }
        }
        printf("Sorted");
    }
    return 0;
}