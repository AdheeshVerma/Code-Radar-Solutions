#include<stdio.h>
void rev(char* str,start,end){
    while(start<end){
        int temp = start;
        start = end;
        end = temp;
        start++;
        end--;
    }
}
int main(){
    char str[500];
    scanf("%s",str);
    int i=0,count=0;
    while(i!=0){
        count++;
        i++;
    }
    rev(str,0,count);
    printf("%s",str);
}