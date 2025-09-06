#include<stdio.h>
int main(){
    int age;
    printf("Enter Age :");
    scanf("%d" , &age);

    if(age > 18){
        printf("Person is adult \n");
    }
    else{
        printf("Not an adult \n");
    }
    return 0 ;
}