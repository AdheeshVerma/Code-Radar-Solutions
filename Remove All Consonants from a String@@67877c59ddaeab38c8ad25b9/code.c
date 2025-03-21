#include <stdio.h>
int main(){
    char str[500];
    fgets(str,sizeof(str),stdin);
    int i = 0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            printf("%c",str[i]);
        }
        else if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='U' && str[i]>48 && str[i]<57){
            i++;
            continue;
        }
        else{
            printf("%c",str[i]);
        }
        i++;
    }
}