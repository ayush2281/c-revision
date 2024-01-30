#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);

    if(n%5==0 || n%3==0){
     printf("divisible by 5 or 3 : ");
    }

    else{
        printf("this number is not divisible by 5 and 3 : ");
    }

 
    
    
return 0;
}