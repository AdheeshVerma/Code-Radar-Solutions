#include <stdio.h>

int main() {
    int a;
    char c = "A"
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
            printf("%c ",c);
        }
        c++;
    }
    return 0;
}