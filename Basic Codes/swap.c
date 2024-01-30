#include<stdio.h>
int main()
{
    int num1 , num2 , temp;
    printf("Enter the 1st number of");
    scanf("%d", &num1);

    printf("Enter the 2nd number of");
    scanf("%d", &num2);

    printf("original numbers : num1 = %d , num2 =%d\n", num1 , num2);


    // swap using tamporary vrariables
    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("swappped : num1 = %d, num2 = %d\n",num1 , num2);
    
return 0;
}