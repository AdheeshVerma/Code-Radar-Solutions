#include<stdio.h>
int counter(char* arr){
    int n=0;
    while(arr[n]!='\0'){
        n++;
    }
    return n;
}
void reversing(char* arr, int l){
    for(int i=0;i<l/2;i++){
        int temp = arr[i];
        arr[i]=arr[l-i-1];
        arr[l-i-1]=temp;
    }
    
}
int main(){
    char arr[50];
    scanf("%s",arr);
    int l = counter(arr);
    reversing(arr,l);
    printf("%s",arr);
    return 0;
}