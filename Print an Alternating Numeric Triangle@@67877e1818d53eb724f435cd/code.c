#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
            if(j % 2 != 0){
            printf("1");}
            else{
                printf("0")
            }
        }
        printf("\n");
    }
    return 0;
}