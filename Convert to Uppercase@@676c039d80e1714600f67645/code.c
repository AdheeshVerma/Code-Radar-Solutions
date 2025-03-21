#include <stdio.h>
#include<string.h>
#include<ctype.h>
void toupp(char* str){
    int count = strlen(str)-1;
    for (int i = 0; i < count; i++)
    {
        str[i]= toupper(str[i]);
    }
    
}
int main(){
    char str[500];
    scanf("%s",str);
    toupp(str);
    printf("%s",str);
    return 0;
}