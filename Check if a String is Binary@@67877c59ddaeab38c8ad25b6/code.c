// Your code here...
#include<stdio.h>
int main(){
    char str[100];
    scanf("%s",str);
    int i=0,ded=0;
    while(str[i]!='\0'){
        if(str[i]!='1' && str[i]!='0'){
            ded = 1;
            break;
        }
        i++;
    }
    if (ded==1)
    {
        printf("No");
    }
    else if(ded==0){
        printf("Yes");
    }
    
    return 0;
}