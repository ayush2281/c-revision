#include<stdio.h>
int main()
{
    // volume of radius 

    float radius;
    printf("Enter the number of radius :");
    scanf("%f",&radius);


    float pi;
    printf("Enter the number of pi :");
    scanf("%f",&pi);
    
    float vofradius = 4/3*pi*radius*radius*radius;

    printf("%f",vofradius);

    
return 0;
}