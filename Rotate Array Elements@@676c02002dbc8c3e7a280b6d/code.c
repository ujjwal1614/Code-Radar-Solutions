#include<stdio.h>
void rotate(int st[], int n, int r, int myarr[])
{
for(int i = 0; i<n; i++){
    if(i<n-r-1)
    {
        myarr[i] = st[n-r+i];
    }
    else{
        myarr[i] = st[i-r];
    }
}
}
int main()
{
int n, r;
int myarr[]= {};
scanf("%d", &n);
int st[] = {};
for(int i = 0; i<n; i++)
{
    scanf("%d", &st[i]);
}
scanf("%d", &r);
rotate(st, n, r, myarr);
for(int i = 0; i<n; i++)
{
    printf("%d\n", myarr[i]);
}
return 0;
}
