#include<stdio.h>
int main(){
int i , n , sum =0;
printf("Enter the value of N :");
scanf("%d",&n);
for(int i = 1;i<=n;i++){
sum= sum+(2*i-1);}
printf("Sum of first odd numbers is : %d\n",sum);
return 0;}
