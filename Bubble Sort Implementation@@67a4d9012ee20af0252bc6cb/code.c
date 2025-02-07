#include <stdio.h>

void bubbleSort(arr,n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                a[j]=temp;
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
    
int printArray(arr,n){
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",a[i][j])
        }
    }
    
    
    return 0;
}