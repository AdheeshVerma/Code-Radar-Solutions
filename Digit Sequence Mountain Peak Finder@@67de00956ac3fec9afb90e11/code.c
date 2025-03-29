// Your code here...
void sorter(int* arr,int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;
            }            
        }        
    }
}
int mountainPeak(int n){
    int count =0,a=n;
    while(a){
        count++;
        a/=10;
    }
    int arr[count];
    for(int i=0;i<count;i++){
        int r = n%10;
        arr[count-i-1]=r;
    }
    sorter(arr,count);
    for(int i=0;i<count;i++){
        printf("%d",arr[i]);
    }
    if(arr[count-1]==arr[count-2]){
        return -1;
    }
    else{
        return (arr[count-1]);
    }
}