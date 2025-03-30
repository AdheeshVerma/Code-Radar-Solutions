// Your code here...
int kangaroo(int a,int b,int c,int d){
    int n = ((c-a)/(b-d));
    if(n<0){
        return -1;
    }
    return n;
}