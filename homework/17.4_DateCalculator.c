/*
Prompt the user to enter the month and day of the year (1 for January, 2 for February, etc).
Prompt the user to enter a period of time in days. Print the date after the period entered by the user has passed.
For simplicity, assume that each month has 30 days except for February which always counts as 28 days.

Sample output:
Enter the month and day : 3 5
Enter the days forward: 50
After 50 days, the date of 3/5 will be 4/25.

Test cases: (Month Day Period New Date)
(3, 5, 50, 4/25), (1, 1, 15, 1/16), (1, 1, 33, 2/4), (1, 1, 60, 3/3), (1, 1, 370, 1/13)
*/

#include <stdio.h>

int main() {

    int month, day, daysForward, newMonth, newDay;
    
    // get user input
    printf("Enter the month and day :");
    scanf("%d %d\n", &month, &day);

    printf("Enter the days forward: ");
    scanf("%d\n", &daysForward);

    // temp values for new date
    newDay = day + daysForward;
    newMonth = month;

    // convert days forward to months forward
    while (newDay >= 28) {
        if(newMonth == 2) {
            newMonth++;
            newDay -= 28;
        } else if (newDay >=30 ) {
            newMonth++;
            newDay -= 30;
        }
    }
    // fix in case it goes to the 13th month since we do not care about year
    newMonth = newMonth % 12;
    printf("After %d days, the date of %d/%d will be %d/%d.", daysForward, month, day, newMonth, newDay);

   return 0;
}
