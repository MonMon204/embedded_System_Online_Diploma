/*
 *    Ex5.c
 *
 * Created on Thu Aug 08 2024 1:56:40 PM
 *       Author: Mina Waguih
 *
 * Description: C program that reads the radius of a circle and calculates the area of the circle using a macro.
 */

#include <stdio.h>

#define PI 3.14159
#define AREA(r) (PI * (r) * (r))

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = AREA(radius);

    printf("The area of the circle is: %.2lf\n", area);

    return 0;
}