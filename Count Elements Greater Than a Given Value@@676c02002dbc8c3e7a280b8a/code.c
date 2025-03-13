#include<stdio.h>
int main(){
    int num, givenno;
    scanf("%d %d", &num, &givenno);
    int arr[num];
    for(int i = 0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i = 0; i<num; i++){
        if(arr[i] > givenno){
            count += 1;
        }
    }
    printf("%d", count);
}