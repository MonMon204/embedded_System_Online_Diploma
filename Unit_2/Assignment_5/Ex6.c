/*
 *    Ex6.c
 *
 * Created on Thu Aug 08 2024 1:58:40 PM
 *       Author: Mina Waguih
 *
 * Description: C program that demonstrates the difference between a structure and a union.
 */

#include <stdio.h>

union job
{ // defining a union
    char name[32];
    float salary;
    int worker_no;
} u;

struct job1
{
    char name[32];
    float salary;
    int worker_no;
} s;

int main()
{
    printf("size of union = %d", sizeof(u));
    printf("\nsize of structure = %d", sizeof(s));
    return 0;
}

/*
 *  Output
 *
 *  size of union = 32
 *  size of structure = 40
 *
 */