// Simple interest

#include<stdio.h>
int main(){

   float principle,rate,time,si;
   printf("Enter the principle\n");
   scanf("%f",&principle);


    printf("Enter the rate\n");
   scanf("%f",&rate);

    printf("Enter the  time\n");
   scanf("%f",&time);


   si =(principle*rate*time)/100;

   printf("Ur Simple Interest is : %.1f",si);
   
   

   

    




   return 0;
}