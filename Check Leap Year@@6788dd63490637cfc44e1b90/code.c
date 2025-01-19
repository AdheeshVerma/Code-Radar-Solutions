#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%400==0){
        printf("Leap Year");
    }
    if(a%4==0){
        printf("Leap Year");
    }
    if(a%100==0 && a%400!=0){
        printf("Not a Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    printf("%s", welcome());
    return 0;
}