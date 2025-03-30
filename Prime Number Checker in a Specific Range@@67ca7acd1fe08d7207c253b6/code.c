int isPrime(int a){
    int prime=1;
    if(a<2){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else{
        for(int i=2;i<a;i++){
            if(i%a==0){
                prime =0;
            }
        }
        retrun prime;
    }
}
void printPrimesInRange(int a,int b){
    for(int i=a;i<b;i++){
        int u =isPrime(i);{
            if(u){
                printf("%d",i);
            }
        }
    }
}