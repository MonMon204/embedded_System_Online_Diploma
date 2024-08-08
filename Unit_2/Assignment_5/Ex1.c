/*
 *    Ex1.c
 *
 * Created on Thu Aug 08 2024 1:20:43 PM
 *       Author: Mina Waguih
 *
 * Description: C program that reads name, roll and marks of students and displays the information.
 */

#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

struct student get_studentData()
{
    struct student s;
    printf("Enter information of students:\n");
    printf("Enter name: ");
    gets(s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    return s;
}

int main()
{
    struct student s;
    s = get_studentData();
    printf("Displaying Information\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);
    return 0;
}
