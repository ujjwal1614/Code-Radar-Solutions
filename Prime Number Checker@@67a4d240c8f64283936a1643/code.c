#include<stdio.h>
int isprime(int);
int isprime(int a);
    int a;
    int k;
    scanf("%d", &a);
        for(int u = 2; u<a; u++)
        {
            if(j % u == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int num;
        scanf("%d", &num);
        printf("%d\n", isprime(num));
    }
    return 0;
}