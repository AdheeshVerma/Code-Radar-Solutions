// Your code here...
int fact(int a){
    int fac = 1;
    for(int i=1;i<=a;i++){
        fac*=i;
    }
    return fac;
}
void factorialRange(int a,int b){
    for(int i=a;i<=b;i++){
        int res = fact(i);
        printf("%d\n",res);
    }
}