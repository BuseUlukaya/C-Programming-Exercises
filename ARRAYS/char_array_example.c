/*
    Write a C program that does the following:

    Create a two-dimensional array.
    The elements of the array should be: "one", "two", "three", "four", and "five".
    Print the third character of the fourth element of the array.
 */

#include <stdio.h>
#include <string.h>
int main() {
    char numbers[5][10] = {"one", "two", "three", "four", "five"};

    printf("%c", numbers[3][2]);

        return 0;
}

