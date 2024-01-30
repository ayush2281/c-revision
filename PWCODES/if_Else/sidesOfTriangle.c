// take 3 numbers input and tell if they can be sides of a triangle

#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;

    printf("enter the first number\n");
    scanf("%d", &a);

    printf("enter the second number\n");
    scanf("%d", &b);

    printf("enter the third number\n");
    scanf("%d", &c);

    if((a + b) > c && (b + c) > a && (c + a) > b){
        printf("valid Triangle\n");
    }

    else{
        printf("Invalid Triangle\n");
    }
    return 0;
}