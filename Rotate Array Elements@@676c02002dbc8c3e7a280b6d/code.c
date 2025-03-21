#include<stdio.h>

void rotate(int* arr,int i,int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

}

int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    int n;
    scanf("%d",&n);
    n=n%a;
    // n++;
    rotate(arr,0,n-1);
    rotate(arr,n,a-1);
    rotate(arr,0,a-1);
    for(int i=0;i<a;i++){
        printf("%d\n",arr[i]);
    }
return 0;
}