// Your code here...
#include <stdio.h>
#include <ctype.h>
int main(){
    char str[500];
    fgets(str,sizeof(str),stdin);
    int i = 0;
    while(str[i]!='\0'){
        if (islower(str[i]))
    {
        char c = (toupper(str[i]));
        printf("%c",c);
    }
    else if(isupper(str[i])){
        char c = (tolower(str[i]));
        printf("%c",c);
    }
    else{
        printf("%c",str[i]);
    }
    i++;
    }
}