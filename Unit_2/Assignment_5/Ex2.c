/*
 *    Ex2.c
 *
 * Created on Thu Aug 08 2024 1:25:20 PM
 *       Author: Mina Waguih
 *
 * Description: C program that reads two distances in feet and inches and displays the sum of the distances.
 */

#include <stdio.h>

struct distance
{
    int feet;
    float inch;
};

struct distance get_distance()
{
    struct distance d;
    printf("Enter feet: ");
    scanf("%d", &d.feet);
    printf("Enter inch: ");
    scanf("%f", &d.inch);
    return d;
}

struct distance add_distance(struct distance d1, struct distance d2)
{
    struct distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    while (sum.inch >= 12)
    {
        sum.inch -= 12;
        sum.feet++;
    }
    return sum;
}

int main()
{
    printf("Enter information for 1st distance:\n");
    fflush(stdout);fflush(stdin);
    struct distance d1 = get_distance();

    printf("Enter information for 2nd distance:\n");
    fflush(stdout);fflush(stdin);
    struct distance d2 = get_distance();

    struct distance sum = add_distance(d1, d2);
    printf("Sum of distances = %d'%.1f\"\n", sum.feet, sum.inch);
    
    return 0;
}
