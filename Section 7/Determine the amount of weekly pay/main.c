/*
 * Section 7 Challenge - Determine the amount of weekly pay
 * =========================================================
 * In this challenge, you are to create a C program that calculates your weekly pay
 * 
 * The program should ask the user to enter the number of hours worked in a week via the keyboard
 * 
 * The program should display as output the gross pay, the taxes, and the net pay
 * 
 * The following assumptions should be made:
 * - Basic pay rate = $12.00/hr
 * - Overtime (in excess of 40 hours) = time and a half
 * - Tax rate:
 *  - 15% of the first $300
 *  - 20% of the next $150
 *  - 25% of the rest
 */
#include <stdio.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define REGULAR_WORK_WEEK 40

int main()
{
    int total_hours = 0;
    int overtime_hours = 0;
    double overtime_pay = 0.0;
    double overtime_rate = 0.0;
    double regular_pay = 0.0;
    double gross_pay = 0.0;
    double net_pay = 0.0;
    double taxes = 0.0;

    printf("Please enter the number of hours worked this week: ");

    scanf("%d", &total_hours);

    // Regular pay + Overtime pay
    if (total_hours > REGULAR_WORK_WEEK)
    {
        regular_pay = total_hours * PAYRATE;
        overtime_hours = total_hours - REGULAR_WORK_WEEK;
        overtime_rate = PAYRATE * 1.5;
        overtime_pay = overtime_hours * overtime_rate;
        gross_pay = regular_pay + overtime_pay;
    }
    else // Regular pay
    {
        gross_pay = total_hours * PAYRATE;
    }

    // Taxes
    if (gross_pay <= 300)
    {
        // 15% of the first $300
        taxes = gross_pay * TAXRATE_300;
    }
    else if (gross_pay > 300 && gross_pay <= 450)
    {
        // 15% of the first $300
        taxes = 300 * TAXRATE_300;
        // 20% of the next $150
        taxes += (gross_pay - 300) * TAXRATE_150;
    }
    else if (gross_pay > 450)
    {
        // 15% of the first $300
        taxes = 300 * TAXRATE_300;
        // 20% of the next $150
        taxes += 150 * TAXRATE_150;
        // 25% of the rest
        taxes += (gross_pay - 450) * TAXRATE_REST;
    }

    net_pay = gross_pay - taxes;

    printf("Your gross pay this week is: $%.2f\n", gross_pay);
    printf("Your taxes this week is: $%.2f\n", taxes);
    printf("Your net pay this week is: $%.2f\n", net_pay);

    return 0;
}