#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if(90>=c && c>=65){
        printf("Uppercase");
    }
    else if (122>=c && c>=97){
        printf("Lowercase");
    }
   // printf("%s", welcome());
    return 0;
}