#include <stdio.h>
    int main() {

        int a,b ; //defining the variables
        printf("Enter an integer number :");
        scanf("%d" , &a); // first input is a

        printf("Enter another integer number :");
        scanf("%d" , &b); //second imput is b

        int sum= a + b; //defining the sum
        printf("The sum of the two numbers is %d + %d = %d",a,b,sum); //printing the sum

        return 0;
    }