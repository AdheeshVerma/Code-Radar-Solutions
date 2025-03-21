// Your code here...
#include <stdio.h>
int main(){
    char str[500];
    char c;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&c);
    int i = 0,count=0;
    while(str[i]!='\0'){
        if(str[i]==c){
            count++;
        }
        i++;
    }
    printf("%d",count);
}