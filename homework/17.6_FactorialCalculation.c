/*
Write a program that calculates the factorial of a positive integer n. Recall n! = n ·(n − 1)·(n − 2)· . . . · 3 · 2 · 1. Also, recall that 0! = 1 by definition.

You will prompt the user for a number and then output the factorial.

E.g.

Input number: 4

4! is 24.
*/

#include <stdio.h>

long factorial(int n) {
    // base case
    if(n == 0) {
        return 1;
    } else {
        // recursive case
        return (n * factorial(n - 1));
    }
}

int main() {
    int userNum;
    long fact;

    // user input
    printf("Input number: ");
    scanf("%d", &userNum);

    fact = factorial(userNum);

    printf("%d! = %ld\n", userNum, fact);

   return 0;
}
