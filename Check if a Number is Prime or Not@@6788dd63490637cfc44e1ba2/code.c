#include <stdio.h>

int main() {
    int a;
    int v=1;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0){
            v=0;
            break;
        }
    }
    if(v==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}