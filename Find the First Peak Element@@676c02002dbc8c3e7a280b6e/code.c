#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int myarr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &myarr[i]);
    }
    for(int i = 1; i<n-1; i++){
        if(myarr[i] > myarr[i-1] && myarr[i] > myarr[i+1]){
            printf("%d", myarr[i]);
            return 0;
        }
    }
    if(myarr[n-1] > myarr[n-2]){
        printf("%d", myarr[n-1]);
        return 0;
    }
    printf("-1");
    return 0;
}