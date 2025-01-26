#include <stdio.h>

int main() {
    int n;
    scnaf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;i++){
            printf(" ");
        }
        for(int j=0;j<(2*i)+1;i++){
            printf("*");
        }
    }
    return 0;
}