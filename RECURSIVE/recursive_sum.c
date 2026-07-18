/*Write a C program that multiplies two integers entered from the keyboard without using the multiplication operator, using a recursive function.*/

#include <stdio.h>

int sumRecursive(int number_1, int number_2) {
    if(number_2 == 0) {
        return 0;
    }
    else {
        return number_1 + sumRecursive(number_1, number_2 - 1);
    }
}

int main() {
    int first_number, second_number;
    int result;

    printf("Enter first number: ");
    scanf("%d", &first_number);
    printf("Enter second number: ");
    scanf("%d", &second_number);

    result = sumRecursive(first_number, second_number);

    printf("Multiplication of two integers: %d", result);

    return 0;
}



