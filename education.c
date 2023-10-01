#include<stdio.h>

int main(void) {
    int years;

    /*promt user for the number of years in education*/
    printf("Enter the number of years in education");
    scanf("%d", &years);

    /*determine the level of education*/
    if (years>=0 && years<=7) {
        printf("You have achieved primary education.\n");
    } else if (years>=8 && years<=12) {
        printf("You have achieved Secondary level education.\n");
    } else if (years>=13) {
        printf("You have achieved Tertiary level education.\n");
    } else {
        printf("Invalid input. Please enter a positive interger representing years in education.\n");
    }

    return 0;
}