#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int myarr[n];
    int odd = 0;
    int even = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &myarr[i]);
    }
    for(int i = 0; i<n; i++){
        if(myarr[i] % 2 == 0){
            even += 1;
        }
        else{
            odd += 1;
        }
    }
    printf("%d %d", even, odd);
}