/*
Sites like Zillow get input about house prices from a database and provide nice summaries for readers. Write a program with two inputs, current price and last month's price (both integers). Then, output a summary listing the price, the change since last month, and the estimated monthly mortgage computed as (currentPrice * 0.051) / 12 (Note: Output directly as a floating-point value. Do not store in a variable.).

Ex: If the input is:

200000 210000
the output is:

This house is $200000. The change is $-10000 since last month.
The estimated monthly mortgage is $850.000000.
Note: Getting the precise spacing, punctuation, and newlines exactly right is a key point of this assignment. Such precision is an important part of programming.

*/

#include <stdio.h>

int main(void) {
   int currentPrice;
   int lastMonthsPrice;
   float monthlyMortgage;
   int changeLastMonth;

    // get user inputs
   scanf("%d", &currentPrice);
   scanf("%d", &lastMonthsPrice);

   
   changeLastMonth = currentPrice - lastMonthsPrice;
   monthlyMortgage = (currentPrice * 0.051) / 12;

   printf("This house is $%d. The change is $%d since last month.\nThe estimated monthly mortgage is $%f.\n", currentPrice, changeLastMonth, monthlyMortgage);


   return 0;
}