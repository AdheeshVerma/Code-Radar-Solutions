// Your code here...
binarySearch(arr,n,target){
    int low, mid, high;
    low = 0;
    high = n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<element){
            low = mid+1;
        }
        else if(arr[mid]<element){
            high = mid-1;
        }
    }
    return -1;
}