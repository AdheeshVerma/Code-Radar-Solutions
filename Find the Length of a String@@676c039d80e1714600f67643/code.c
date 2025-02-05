#include <stdio.h>

int main() {
    char str[100];
    scanf("%s",&str);
    int size,k;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d",size);
    return 0;
}