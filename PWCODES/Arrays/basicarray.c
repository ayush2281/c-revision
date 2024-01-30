#include<stdio.h>
int main(){
    // int arr[4];
    // printf("Entr the first element : ");
    // scanf("%d",&arr[0]); 

    // printf("Entr the 2nd element : ");
    // scanf("%d",&arr[1]); 
    // printf("Entr the 3rd element : ");
    // scanf("%d",&arr[2]);

    // printf("Entr the 4th element : ");
    // scanf("%d",&arr[3]);  
    // printf("%d",arr[3]);
    
     int arr[5] = {2,4,6,8,1};
    arr[4] = 100;  // now this will be {2,4,6,8,1}

    arr[1] = 1;// now this will be {2,4,6,8,1}
    printf("%d",arr[10]);

    float arr[3]= {1.21,0.21,-0.23};
    printf("%f",arr[2]);

    char arr[4] = {'a', 'b', 'c', 'd', 'e'};
    printf("%c",arr[3]);


    return 0;
}
