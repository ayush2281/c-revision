//Take two integer input a,b : a>b, and find the remainder whwn a is divided by b.
#include<stdio.h>
int main(){

    int a,b;

    printf("Enter the 1st number");
    scanf("%d",&a);
    
     printf("Enter the 2nd number");
    scanf("%d",&b);

    int  q;
    q=a/b;

    int r = a-b*q;  // divisor * Quotient + remainder = divident
    printf("the remainder when %d is divided by %d is : %d ",a,b,r);


    return 0;
}