// Your code here...
#include <stdio.h>
int max(int* arr, int n){
    int max= arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
  
    }
    return max;
}
int min(int* arr, int n){
    int min= arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min>arr[i])
        {
            min=arr[i];
        }
  
    }
    return min;
}
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d %d",max(arr,a),min(arr,a))
}