// Your code here...
int maxright(int* arr,int i,int n){
    int max=arr[i+1];
    for(int j=i+1;j<n;j++){
        if(arr[j]>max){
            max=arr[j];
        }
    }
    return max;

}
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        arr[i]=maxright(arr,i,n);
    }
    arr[n-1]=-1;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}