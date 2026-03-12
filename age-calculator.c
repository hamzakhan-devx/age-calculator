#include<stdio.h>
int main()
{
    int birth_year, current_year, age;
    
    // Input birth year and current year
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    
    printf("Enter the current year: ");
    scanf("%d", &current_year);
    
    // Calculate age
    age = current_year - birth_year;
    
    // Output the age
    printf("Your age is: %d\n", age);
    
    // Age in months is age multiplied by 12
    printf("Your age in months is: %d\n", age * 12);

    // age in days
    printf("Your age in days is: %d\n", age * 365);

    // age in hours
    printf("Your age in hours is: %d\n", age * 365 * 24);
    
    return 0;
}