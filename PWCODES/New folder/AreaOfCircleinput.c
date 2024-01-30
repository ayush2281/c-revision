#include<stdio.h>
int main(){

    float r;
    printf("Enter the radius here");
        scanf(" %f",&r);

    float pi = 3.145;

    float area = pi*r*r; 
    printf("The area of circle is : %f",area);
   
 return 0;
}