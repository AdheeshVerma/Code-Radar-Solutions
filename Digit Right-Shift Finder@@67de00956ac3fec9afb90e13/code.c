// Your code here...
int digitRightShift(int n){
    int count=0,a = n;
    while(a){
        count++;
        a/=10;
    }
    int r = n%10;
    n/=10;
    int res = (r+10*(count-1))+n;
    return res;

}