#include <stdio.h>

int main() {
    char str[100];
    scanf("%[^\n]s",&str);
    int size=0,k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d",size);
    return 0;
}