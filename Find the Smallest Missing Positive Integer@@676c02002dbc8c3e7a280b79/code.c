#include<stdio.h>
void sortit(int* arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void finder(int* arr,int n){
    int i=1;
    for(int j=0;j<n;j++){
        if(arr[j]==i){
            i++;
        }
    }
    printf("%d",i);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sortit(arr,n);
    finder(arr,n);
}