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
    
    return 0;
}