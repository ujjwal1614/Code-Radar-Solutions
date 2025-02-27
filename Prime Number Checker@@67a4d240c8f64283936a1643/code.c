#include<stdio.h>
int isPrime(int a){
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
