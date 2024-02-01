/*
A positive integer is said to be a perfect number if it equals the sum of its positive divisors (excluding the number itself). As an example, 6 is a perfect number because its divisors, 1, 2, and 3 sums up to 6.

The first four perfect numbers are 6, 28, 496, 8128.

Write a C program that prompts the user to enter a number and checks if the number is perfect. Your program should run interactively until the user quits. Try to minimize the program execution time by using the least number of iterations for finding the divisors of the user’s input. Record and report the number of iterations executed for checking if a number is perfect. The valid range of inputs is restricted to any number between 100 and 10,000 (including the boundaries).

Sample Output
Enter a number between 100 and 10,000:1
This number is outside the accepted range.
Do you want to continue (y/n)?y
Enter a number between 100 and 10,000:400
Number 400 is not perfect
Number of iterations:200
Do you want to continue (y/n)?y
Enter a perfect number:496
Number 496 is perfect
Number of iterations:248
Do you want to continue (y/n)?n
Goodbye!
*/

#include <stdio.h>

int main() {
    char repeat;
    do {
        int num, sum = 1, i;

        // get input 
        printf("Enter a number between 100 and 10,000:");
        scanf("%d", &num);
        
        if (num < 100 || num > 10000) {
            printf("This number is outside the accepted range.\n");
        } else {
            // calculation for perfect
            for (i = 2; i <= num / 2; ++i) {
                if (num % i == 0) {
                sum += i;
                }
            }
            // print perfect or not
            printf("Number %d is %s\n", num, (sum == num) ? "perfect." : "not perfect.");
            printf("Number of iterations:%d\n", i - 1);
        }

        // continue or not
        printf("Do you want to continue (y/n)?");
        scanf(" %c", &repeat);

    } while (repeat == 'y');

    printf("Goodbye!\n");
    return 0;
}