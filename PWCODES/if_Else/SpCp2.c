#include<stdio.h>

int main() {
    int cp;
    printf("Enter the cost price: ");
    scanf("%d", &cp);

    int sp;
    printf("Enter the selling price: ");
    scanf("%d", &sp);

    if (sp > cp) {
       
        int profit = sp - cp; // Calculate profit amount
        printf("Profit: %d\n", profit);
        printf("You got this amount of profit: %d\n", profit);
    } else if (sp < cp) {
        printf("Loss\n");
    } else sp = cp;     {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
