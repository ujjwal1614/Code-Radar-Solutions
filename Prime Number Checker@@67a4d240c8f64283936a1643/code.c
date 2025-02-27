#include<stdio.h>
int isprime(int a){
    int k;
    scanf("%d", &a);
    if(a<=1)
    {
        return 0;
    }
        for(int u = 2; u<a; u++)
        {
            if(a % u == 0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
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