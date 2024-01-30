// Given the length and the breadth of the rectangle , write the program to find the area of the rectangle is greater than the its perimeter


#include<stdio.h>
int main()
{
  int l;
  printf("Enter the length : ");
  scanf("%d",&l);

  int b;
  printf("Enter the breadth : ");
  scanf("%d",&b);

  int area = l*b;
  printf("Area of rectangle is : %d\n", area);
  int perimeter = 2*(l+b);
  printf("perimeter of rectangle is :%d\n", perimeter);

  if(area>perimeter)
  {
    printf("Area is greater than perimeter\n");
  }
  else
  {
    printf("Area is less than perimeter\n");
  }
return 0;
}