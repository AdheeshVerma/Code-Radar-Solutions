#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int arr[a];
    int test = 0;
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        if(arr[i]<=arr[i+1]){
            continue;
        }
        else{
            test=1;
            break;
        }
        
    }
    if(test==0){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    return 0;
}