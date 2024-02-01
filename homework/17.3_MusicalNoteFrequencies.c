/*
On a piano, a key has a frequency, say f0. Each higher key (black or white) has a frequency of f0 * r^n, where n is the distance (number of keys) from that key, and r is 2^(1/12). Given an initial key frequency (an integer), output that frequency and the next 4 higher key frequencies.

Output each floating-point value with two digits after the decimal point, which can be achieved as follows:
printf("%0.2lf", yourValue);

Ex: If the input is:

440.0
(which is the A key near the middle of a piano keyboard), the output is:

440.00 466.16 493.88 523.25 554.37
Note: Use one statement to compute r = 2(1/12) using the pow function (remember to include the math library). Then use that r in subsequent statements that use the formula fn = f0 * rn with n being 1, 2, 3, and finally 4.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double freq;
    double r = pow(2.0, (1/12.0));

    // get user input 
    scanf("%lf", &freq);
    printf ("%0.2lf ", freq);

    // loop for next 5 frequency values
    for(int i = 1; i < 5; i++) { 
        // next frequency value
        double tempFreq = freq * pow(r, i);
        printf("%0.2lf", tempFreq);
        // janky add whitespace (i dont think this is even neccessary)
        if (i < 4) {
            printf(" ");
        }
    }
    // add new line at end to make the textbook happy
    printf("\n");
   
   return 0;
}
