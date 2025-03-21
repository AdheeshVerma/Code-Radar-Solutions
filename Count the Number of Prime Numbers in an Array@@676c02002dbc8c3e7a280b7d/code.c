// Your code here...
#include<stdio.h>
int isprime(int a){
    if(a<2){
        return 0;
    }
    else if(a==2){
        return 1;
    }
    else if(a>2){
        for(int i = 2;i<a;i++){
            if(a%i==0){
                return 0;
            }
        }
        return 1;

    }
}
int main(){
    int a,count=0,temp;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&temp);
        if(isprime(temp)){
            count++;
        }
    }
    printf("%d",count);
}