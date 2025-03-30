// Your code here...
void sorter(int* arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int kthSmallest(int* arr,int a,int b){
    sorter(arr,a);
    return(arr[b-1]);
}