#include<stdio.h>
struct details{
int roll;
char name[500];
float marks;
};

int main(){
    int a;
    scanf("%d",&a);
    struct details stuts[a];
    for(int i=0;i<a;i++){
        scanf("%d",&stuts[i].roll);
        scanf("%s",stuts[i].name);
        scanf("%f",&stuts[i].marks);
        
    }
    for (int i = 0; i < a; i++)
    {
    printf("Roll Number: %d, Name: %s, Marks: %f",stuts[i].roll,stuts[i].name,stuts[i].marks);
        
    }
    
}