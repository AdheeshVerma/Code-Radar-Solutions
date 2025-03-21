// Your code here...
#include<stdio.h>
int main(){
    char str[500];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
        else{
            i++;
            continue;
        }        
        i++;
    }
}