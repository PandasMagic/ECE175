/*
Implement an automated number-to-text conversion system for a phone company.

Prompt the user to input an integer and convert each digit to the appropriate text word. The integer can be of variable length, but no longer than 10 digits. Assume that no phone number starts with a zero. Do not use strings or any function from the string library.

Sample Output
Enter your phone number: 2345769854
two three four five seven six nine eight five four
*/

#include <stdio.h>
#include <math.h>

int main() {
    long long number;
    int length, i;

    // get phone number from user 
    printf("Enter your phone number: ");
    scanf("%lld", &number); 
    
    // calculate num digits of number
    length = ((int)log10(number)) + 1;

    // iterate through phone number left to right
    for(i = (int)pow(10, length-1); i > 0; i /= 10) {
        // print out each number
        int digit = number / i;
        switch (digit) {
            case 0: 
                printf("zero ");
                break;
            case 1: 
                printf("one ");
                break;
            case 2: 
                printf("two ");
                break;
            case 3: 
                printf("three ");
                break;
            case 4: 
                printf("four ");
                break;
            case 5: 
                printf("five ");
                break;
            case 6: 
                printf("six ");
                break;
            case 7: 
                printf("seven ");
                break;
            case 8: 
                printf("eight ");
                break;
            case 9: 
                printf("nine ");
                break;
        }
        number %= i;
    }
    printf("\n");

    return 0;
}
