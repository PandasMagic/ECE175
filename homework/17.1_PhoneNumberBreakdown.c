/* 
Consider a long long integer representing a 10-digit phone number given by the user via the keyboard. Break down the input to a phone-friendly format represented by the area code (in parenthesis), followed by the prefix, and line number using the format (800) 555-1212.

Ex: If the input is:

8005551212
the output is:

(800) 555-1212
Hint 1: You can use the modulo operator (%) to get the desired number of least significant (rightmost) digits of a number. Ex: The rightmost 2 digits of 572 can be obtained by 572 % 100, which is 72.

Hint: Use the integer division operator (/) to obtain the most significant (leftmost) digits of a number. Ex: Dividing 572 by 100 yields 5. (Recall integer division discards the fraction).

Use a combo of these two operations to break down the number in the desired parts (e.g., area code) and print out the right format. You do not need to use loops.

For simplicity, assume any part starts with a non-zero digit. So 0119998888 is not allowed as input.
*/

#include <stdio.h>

int main(void) {
   long long phoneNumber;
   int areaCode;
   int COC;
   int lineNumber;
   /* Add more variables as needed */
   
   scanf("%lld",  &phoneNumber);
   lineNumber = phoneNumber % 10000;
   phoneNumber /= 10000;

   //printf("lineNumber: %d\nphoneNumber: %lld\n", lineNumber, phoneNumber);
   COC = phoneNumber % 1000;
   phoneNumber /= 1000;
   
   //printf("COC: %d\nphoneNumber: %lld\n", COC, phoneNumber);
   areaCode = phoneNumber;

    printf("(%d) %d-%d\n", areaCode, COC, lineNumber);
   return 0;
}
