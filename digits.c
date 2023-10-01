#include<stdio.h>

int main(void) {
    int number, hundreds, tens, ones;

    /*prompt user for a positive three-digit number*/
    printf("Enter a positive, three-digit integer: ");
    scanf("%d", &number);

    /*calculate the number of ones, tens, and hundreds*/
    ones = number % 10;
    tens = (number / 10) % 10;  // Corrected logic for tens place
    hundreds = number / 100;

    /*Display the results on separate lines*/
    printf("Ones: %d\n", ones);
    printf("Tens: %d\n", tens);
    printf("Hundreds: %d\n", hundreds);

    return 0;
}
