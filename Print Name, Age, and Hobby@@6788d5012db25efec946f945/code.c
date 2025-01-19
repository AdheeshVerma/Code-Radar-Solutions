#include <stdio.h>

int main() {
    char name[100],hobby[100];
    int age;
    scanf("%s %d",&name,&age);
    scanf("%d",&hobby);
    printf("Name: %s\nAge: %d\nHobby: %s", name,age,hobby);
    return 0;
}