
#include<stdio.h>

int main(void) {
    /*10 characters for the first name and 1 for the null terminator*/
    char firstName[11];
    /*10 characters for the last name and 1 for the null terminator*/
    char lastName[11];
    int age;
    float employmentFraction;

    /*promt user for name age and employment fraction input*/
    printf("Enter your name, age, and employment fraction: ");
    scanf("%s %s %d %f", firstName, lastName, &age, &employmentFraction);

    /*Displaying name, age, and employment fraction*/
    printf(" Your name is %s %s, your are %d years old and your employment fraction is %.1f.\n", firstName, lastName, age, employmentFraction);

    return 0;

}