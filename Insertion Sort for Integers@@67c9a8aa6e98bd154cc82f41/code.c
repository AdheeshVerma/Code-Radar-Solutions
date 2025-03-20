// Your code here...
void printArray(int arr, int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}

void insertionSort(arr,n){
    for(int i=0;i<n-1;i++){
        int key,j;
        key = arr[i];
        j = i-1;
        while(j>0&& arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}