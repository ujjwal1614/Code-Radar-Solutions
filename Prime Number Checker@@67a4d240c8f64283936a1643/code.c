#include<stdio.h>
int isPrime(int num){
if(num <= 1){
    printf("0");
}
else{
    for(int i = 2; i<num; i++){
        if(num % i == 0){
            return 0;
        }
    }
    printf("1");
}
}
