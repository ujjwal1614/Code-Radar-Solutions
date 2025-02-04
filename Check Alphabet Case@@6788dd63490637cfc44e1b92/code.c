#include <stdio.h>

int main() {
    char character;
    scanf("%c", &character);
    if(97 <= character <= 122){
            printf("Uppercase");
    }
    else if(65 <= character <= 90){
        printf("Lowercase");
    }
    return 0;
}