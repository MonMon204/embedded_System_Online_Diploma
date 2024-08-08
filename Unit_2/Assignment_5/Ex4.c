/*
 *    Ex4.c
 *
 * Created on Thu Aug 08 2024 1:44:52 PM
 *       Author: Mina Waguih
 *
 * Description: C program that reads name, roll and marks of 10 students and displays the information.
 */

#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

struct student get_studentData(int n)
{
    struct student s;
    printf("For roll number %d\n", n);
    s.roll = n;
    printf("Enter name: ");
    gets(s.name);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    fflush(stdin);fflush(stdout);
    return s;
}

int main()
{
    struct student s[10];
    printf("Enter information of students:\n");
    for (int i = 0; i < 10; i++)
    {
        s[i] = get_studentData(i + 1);
    }
    fflush(stdin);fflush(stdout);
    printf("Displaying Information of students: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Information for roll number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.1f\n", s[i].marks);
    }
    return 0;
}
