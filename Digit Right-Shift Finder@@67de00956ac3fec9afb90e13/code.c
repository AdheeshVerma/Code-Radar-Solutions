// Your code here...
int digitRightShift(int n){
    int count=0,a = n;
    while(a){
        count++;
        a/=10;
    }
    int r = n%10,res=1;
    n/=10;
    for(int i = 0;i<count-1;i++){
res*=10;
    }
    res*=r;
    res+=n;
    return res;

}