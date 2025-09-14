#include <stdio.h> // <-- FIXED THE SPELLING

int main(void) {
    // 1. Declaring variables.
    int age;
    float hourly_wage;
    char first_initial;

    // 2. Assigning values
    age = 21;
    hourly_wage = 24.75f;
    first_initial = 'L';

    // 3. Using them with printf.
    printf("Age: %d\n", age);
    printf("Wage: $%.2f\n", hourly_wage);
    printf("Initial: %c\n", first_initial);
    printf("...and he goes by '%caddd Boiiii'\n", first_initial); // <- Added variable and fixed ;

    // 4. Declare and assign on the same line.
    int year = 2025; // <- FIXED 'init' to 'int'
    printf("The Year is: %d \n", year); // <- FIXED THE QUOTES

    return 0;
}
