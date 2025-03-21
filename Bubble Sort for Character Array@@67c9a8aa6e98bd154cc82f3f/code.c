// Your code here...
void printArray(char* arr,int n){
    for(int i = 0;i<n;i++){
        printf("%c ",arr[i]);
    }
}

void bubbleSort(char* a, int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}