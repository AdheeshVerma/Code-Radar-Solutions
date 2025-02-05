#include <stdio.h>

int main() {
    char str[100];
    scanf("%s",&str);
    int size=0,k=0,vow=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    for(int i;i<size;i++){
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
            vow++;
        }
    }
    printf("%d",vow);
    return 0;
}