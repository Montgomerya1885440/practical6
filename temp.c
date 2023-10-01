/*This program converts the users Celsius input to Fahrenheit*/

#include<stdio.h>

int main(void) {
    int x;

    /*Prompt user for celsius temperature input*/
    printf("Enter a temperature in Celsius: ");
    /*read and store input to x*/
    scanf("%d", &x);

    /*comvert Celsius to Fahrenheit*/
    /*display temperature conversion*/
    printf("Your temperature %d degrees Celsiuis is %d Fahrenheit\n", x, (((x*9)/5)+32));
    
    return 0;
}