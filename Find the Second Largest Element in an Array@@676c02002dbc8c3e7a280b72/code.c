#include <stdio.h>
int max(int* arr, int n){
    int se = 0,max=0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            se = max;  
            max = arr[i];         
        }
        else if (arr[i] > se && arr[i] != max) {
            se = arr[i];
        }  
    }
    if(se){
return se;}
else{
    return -1;
}
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",max(arr,a));
}