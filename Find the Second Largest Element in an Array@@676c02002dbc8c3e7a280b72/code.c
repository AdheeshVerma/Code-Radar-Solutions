#include <stdio.h>
int max(int* arr, int n){
    int se,max;
    if(n<2){
        return -1;
    }
    else{
        if(arr[0]>arr[1]){
            max = arr[0];
            se = arr[1];
        }
        else{
            max = arr[0];
            se = arr[1];
        }
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            se = max;  
            max = arr[i];         
        }
        else if (arr[i] > se && arr[i] != max) {
            se = arr[i];
        }  
    }
    if(max==se){
        return -1;
    }
    if(se){
    return se;
    }
else{
    return -1;
}
}}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",max(arr,a));
}