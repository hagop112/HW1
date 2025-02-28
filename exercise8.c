#include <stdio.h>
    int main() {

        int a,b ; //defining the variables
        printf("Enter an integer number :");
        scanf("%d" , &a);//asking to enter the 1st input

        printf("Enter another integer number :");
        scanf("%d" , &b); //asking to enter the 2nd variable

        printf("The two numbers together look like %d%d",a,b); //just printing both side by side no space

        return 0;
    }