#include<stdio.h>
void rotate(int st[], int n, int r)
{
int myarr[n];
for(int i = 0; i<n; i++){
    if(i<r)
    {
        myarr[i] = st[n-r+i];
    }
    else{
        myarr[i] = st[i-r];
    }
}
for(int i = 0; i<n; i++)
{
    printf("%d\n", myarr[i]);
}
}
int main()
{
int n, r;
scanf("%d", &n);
int st[n];
for(int i = 0; i<n; i++)
{
    scanf("%d", &st[i]);
}
scanf("%d", &r);
rotate(st, n, r);
return 0;
}