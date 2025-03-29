// Your code here...
int joiner(int* arr,int n){
    int res = 0;
    for(int i=0;i<n;i++){
        int a = arr[i];
        res=res*10+a;
    }
    return res;
}

int incrementToPrimeDigits(int n){
    int a=n,count=0;
    while(a){
        count++;
        a/=10;
    }
    int arr[count];
    for(int i=0;i<count;i++){
        int r=n%10;
        arr[count-i-1]=r;
        n/=10;
    }

    for(int i=0;i<count;i++){
        if(arr[i]==0){
        arr[i]=2;}
        else if(arr[i]==1){
        arr[i]==2;}
        else if(arr[i]==2){
        arr[i]==3;}
        else if(arr[i]==3){
        arr[i]==5;}
        else if(arr[i]==4){
        arr[i]==5;}
        else if(arr[i]==5){
        arr[i]==7;}
        else if(arr[i]==6){
        arr[i]==7;}
        else if(arr[i]==7){
        arr[i]==2;}
        else if(arr[i]==8){
        arr[i]==2;}
        else if(arr[i]==9){
        arr[i]==2;}
        
    }
        for(int i=0;i<count;i++){
        printf("%d\n",arr[i]);
    }
    int res = joiner(arr,count);
    //return res;
}