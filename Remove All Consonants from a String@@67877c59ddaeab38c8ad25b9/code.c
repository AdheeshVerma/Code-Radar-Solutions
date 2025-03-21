// Your code here...
#include <stdio.h>
int main(){
    char str[500];
    fgets(str,sizeof(str),stdin);
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            printf("%c",i);
        }
        else{
            i++;
            continue;
        }
        i++;
    }
}