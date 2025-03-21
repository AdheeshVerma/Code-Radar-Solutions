#include<stdio.h>
#include<string.h>
struct details{
int roll;
char name[500];
float marks;
};

int main(){
    int a,roll;
    float max=0;
    char name[200];
    scanf("%d",&a);
    struct details stuts[a];
    for(int i=0;i<a;i++){
        scanf("%d",&stuts[i].roll);
        scanf("%s",stuts[i].name);
        scanf("%f",&stuts[i].marks);
        
    }
    for (int i = 0; i < a; i++)
    {
        if (stuts[i].marks > max)
        {
            roll = stuts[i].roll;
            max = stuts[i].marks;
            strcpy(name,stuts[i].name);

        }
        

        
    }
 
    printf("Roll Number: %d, Name: %s, Marks: %.2f\n",roll,name,max);

}