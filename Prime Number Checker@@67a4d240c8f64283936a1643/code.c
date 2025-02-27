#include<stdio.h>
int main()
{
    int a;
    int k;
    scanf("%d", &a);
    for(int i =0; i<a; i++)
    {
        int j = 0;
        scanf("%d", &j);
        for(int u = 2; u<j; u++){
            if(j % u == 0)\
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    }
}