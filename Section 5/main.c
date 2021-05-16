/*
 * Section 5 Challenge
 * =========================================================
 * In this challenge, you are to create a C program that displays the perimeter and area of a rectangle
 * 
 * The program should create 4 variables of type double
 * - one variable to store the width of the rectangle
 * - one variable to store the height of the rectangle
 * - one variable to store the perimeter of the rectangle
 * - one variable to store the area of the rectangle
 * 
 * The program should perform the calculation for the perimeter of a rectangle
 * - Use the + operator addition and the * operator for multiplication perimeter 
 *   is calculated by adding the height and width and then multiplying by two
 * - Area is calculated by multiplying the width * height variables
 * 
 * The program should display the height, width, and perimeter variables in a correct format in one print statement
 * The program should display the height, width, and area variables in the correct format in one print statement
 */
#include <stdio.h>

int main()
{
    double width = 32.3;
    double height = 15.3;
    double perimeter = 0.0;
    double area = 0.0;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("Perimeter is: %f\n", perimeter);
    printf("Area is: %f", area);

    return 0;
}