#include <stdio.h>
int main(){
    char str[500];
    char c;
    char c2;
    fgets(str,sizeof(str),stdin);
    scanf(" %c",&c);
    // getchar();
    scanf(" %c",&c2);
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]==c){
            printf("%c",c2);
        }
        else{
            printf("%c",str[i]);

        }
        i++;
    }
}