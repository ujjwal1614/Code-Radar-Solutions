#include <stdio.h>

int main() {
    char character;
    scanf("%c", &character);

    if(97 <= character && character <= 122){
            printf("Lowercase");
    }
    else if(65 <= character && character <= 90){
        printf("Uppercase");
    }
    else{
        printf("Not a character")
    }
    
    return 0;
}