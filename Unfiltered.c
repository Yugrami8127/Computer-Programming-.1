#include <stdio.h>

int main() {
    int a , b ;
    printf("First number lakh chodya: ");
    scanf("%d",&a);

    printf("Second number lakh chodya: ");
    scanf("%d",&b);

    if(a>b)
    {
        printf("%d is greater than %d", a,b);
    }
    else
    {
        printf("%d is greater than %d", b,a);
    }
    return 0;
}




