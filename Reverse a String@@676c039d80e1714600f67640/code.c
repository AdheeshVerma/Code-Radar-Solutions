#include<stdio.h>
void rev(char* str,int start,int end){
    while(start<end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(){
    char str[500];
    scanf("%s",str);
    int i=0,count=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    rev(str,0,count-1);
    printf("%s",str);
}