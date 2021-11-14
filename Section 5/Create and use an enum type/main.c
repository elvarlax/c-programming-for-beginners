/*
 * Section 5 Challenge - Create and use an enum type
 * =========================================================
 * In this challenge, you are to create a C program that defines 
 * an enum type and uses that type to display the values of some variables
 * 
 * The program should create an enum type named Company
 * - Valid values for this type are GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
 * 
 * The program should create three variables of the above enum type that are assigned values:
 * XEROX, GOOGLE, and EBAY
 * 
 * The program should display as output, the value of the three variables with each variable separated by a newline
 * - Correct output would be if XEROX, GOOGLE, and EBAY variables are printed in that order: 
 * - 2 
 * - 0 
 * - 4
 */
#include <stdio.h>

int main()
{
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHOO,
        EBAY,
        MICROSOFT
    };

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The value of xerox: %d\n", xerox);
    printf("The value of google: %d\n", google);
    printf("The value of ebay: %d\n", ebay);

    return 0;
}