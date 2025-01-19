#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[100],str2[100];
    scanf("%s %s",&str1,&str2);
    printf("Your entered: %s %s", str1,str2);
    return 0;
}