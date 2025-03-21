// Your code here...
#include <stdio.h>
int main(){
    char str[500];
    char c;
    fgets(str,sizeof(str),stdin);
    scanf("%c",&c);
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]=='a' ||str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='A' ||str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            printf("%c",c);
        }
        else{
            printf("%c",str[i]);

        }
        i++;
    }
    // printf("%d",count);
}