/*
 * Section 6 Challenge - Convert minutes to years and days
 * =========================================================
 * In this challenge, you are to create a C program that converts the number of minutes to days and years
 * 
 * The program should ask the user to enter the number of minutes via the terminal
 * 
 * The program should display as output the minutes and then its equivalent in years and days
 * 
 * The program should create variables to store (should all be of type double)
 * - minutes (int)
 * - minutes in years
 * - Years
 * - Days
 */
#include <stdio.h>

int main()
{
    int minutes = 0;
    double years = 0.0;
    double days = 0.0;
    double minutesInYear = 525600;
    double minutesInDay = 1440;

    printf("Please enter the number of minutes: ");

    scanf("%d", &minutes);

    years = minutes / minutesInYear;
    days = minutes / minutesInDay;

    printf("%d minutes in approximately %f years and %f days\n", minutes, years, days);

    return 0;
}