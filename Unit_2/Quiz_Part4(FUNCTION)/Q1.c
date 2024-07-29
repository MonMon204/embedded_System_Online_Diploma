/*
 *    Q1.c
 *
 * Created on Mon Jul 29 2024 2:18:52 PM
 *       Author: Mina Waguih
 *
 * Description: C program takes string from the user and check if it the same USERNAME or not.
 */

#include <stdio.h>
#include <string.h>

char username[] = "USERNAME";

int isUsername(char *str)
{
    if(strcmp(str, username) == 0)
        return 1;
    else
        return 0;
}


int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    if(isUsername(str))
        printf("Correct Username");
    else
        printf("Incorrect Username");
    return 0;
}
