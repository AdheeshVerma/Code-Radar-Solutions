
int bubbleSort(arr,n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}
    
int printArray(arr,n){
    int i,j;
    for(i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    return 0;
}