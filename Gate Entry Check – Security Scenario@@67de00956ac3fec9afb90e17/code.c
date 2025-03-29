// Your code here...
int gateOpen(int threshold,int* entryTimes,int n){
    count=0;
    for(int i=0;i<n;i++){
        if(entryTimes[i]<=0){
            count++;
        }
    }
    if(count>threshold){
        return 1;
    }
    else{return 0;}
}