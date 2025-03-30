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
            if(a%i==0){
                prime = 0;
                break;
            }
        }
        return prime;
    }
}
void printPrimesInRange(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        int u = isPrime(i);{
            if(u){
                count++;
                printf("%d ",i);
            }
        }
    }
    if(count==0);
    printf("No prime numbers");
}