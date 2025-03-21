#include <stdio.h>
#include<string.h>
#include<ctype.h>
void toupp(char* str){
    int count = strlen(str);
    for (int i = 0; i < count; i++)
    {
        str[i]= toupper(str[i]);
    }
    
}
int main(){
    char str[500];
    fgets(str,sizeof(str),stdin);
    toupp(str);
    printf("%s",str);
    return 0;
}