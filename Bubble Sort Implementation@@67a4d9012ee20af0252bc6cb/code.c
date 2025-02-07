#include <stdio.h>

void bubbleSort(arr,n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=temp;
                arr[j]=a[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
    
int printArray(arr,n){
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
    }
    
    
    return 0;
}