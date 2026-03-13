#include<stdio.h>
int main()
{
    int birth_year,birth_month,birth_day, current_year, current_month, current_day, years, months, days, age;
    
    // Input birth year and current year
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    printf("Enter your birth month: ");
    scanf("%d", &birth_month);
    printf("Enter your birth day: ");
    scanf("%d", &birth_day);

    printf("Enter the current year: ");
    scanf("%d", &current_year);
    printf("Enter the current month: ");
    scanf("%d", &current_month);
    printf("Enter the current day: ");
    scanf("%d", &current_day);

    // Calculate age
    years = current_year - birth_year;
    
    if (current_month < birth_month || (current_month == birth_month && current_day < birth_day)) {
        years--;
    }

    // Calculate months and days
    months = current_month - birth_month;
    days = current_day - birth_day;

    if (days < 0) {
        months--;
        days += 30; // Assuming 30 days in a month
    }

    if (months < 0) {
        years--;
        months += 12;
    }

    // Output the age
    printf("Your age is: %d years, %d months, and %d days\n", years, months, days);

    return 0;
}