#include <stdio.h>

void bubbleSort(arr,n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=a[j+1];
                arr[j+1]=temp;
            }
            else{
                continue;
            }
        }
    }
}
    
int printArray(arr,n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf("%d",arr[i][j]);
        }
    }
    
    
    return 0;
}