#include<stdio.h>
int main(){
    int num ;
    printf("Enter the value :");
    scanf("%d" , &num);

    if(num % 3 == 0){
        printf("No. is divisible by 3\n");
    }
    else{
        printf("No. is not divisible by 3\n");
    }
    return 0 ;
}