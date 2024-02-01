/*
Prompt the user to enter the time of the day. The user should enter d for daytime and n for nighttime.
Configure a boolean variable to store if it is daytime (true) or nighttime (false).
Use the boolean variable to store if it is daytime or nighttime and print if the temperature is ideal if it needs to be raised if it needs to be lowered, and by how much.
If a Boolean variable is not used, there will be a 20% grade penalty

Ideal temperatures:
Daytime 21.2 C
Nighttime: 18.3 C

Sample Output
Day (d) or Night (n):n
Enter the current temperature:12
You need to raise the temperature by 6.3 degrees.

Sample Output
Day (d) or Night (n):d
Enter the current temperature:21.2
The temperature is ideal.

Sample Output
Day (d) or Night (n):n
Enter the current temperature:18.3
The temperature is ideal. Have a good night's sleep.

Sample Output
Day (d) or Night (n):d Enter the current temperature:25.5 You need to lower the temperature by 4.3 degrees.
*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

#define IDEAL_AWAKE 21.2 // Ideal daytime temperature
#define IDEAL_SLEEP 18.3 // ideal nightime temperature

int main(void){
    
    float currentTemp; // temperature entered by user
    char userTime; // time of the day entered by user
    bool timeOfDay; // boolean var that holds if it is daytime (true) or nighttime (false)
    float tempDiff;
    char temp;


    // get user inputs
    printf("Day (d) or Night (n):");
    scanf("%c", &temp);

    printf("Enter the current temperature:");
    scanf("%f", &currentTemp);

    // convert char input to bool
    if(temp == 'd') {
        timeOfDay = true;
    } else {
        timeOfDay = false;
    }

    if(timeOfDay) {
        // day
        tempDiff = IDEAL_AWAKE - currentTemp;
        if (fabs(tempDiff) < 0.0001) {
            // temp equal
            printf("The temperature is ideal.\n");
        } else if (tempDiff > 0) {
            // temp is too low
            printf("You need to raise the temperature by %0.1f degrees.\n", tempDiff);
        } else {
            // temp is too high
            printf("You need to lower the temperature by %0.1f degrees.\n", fabs(tempDiff));
        }
    } else {
        // night
        tempDiff = IDEAL_SLEEP - currentTemp;
        if (fabs(tempDiff) < 0.0001) {
            // temp equal
            printf("The temperature is ideal. Have a good night's sleep.\n");
        } else if (tempDiff > 0) {
            // temp is too low
            printf("You need to raise the temperature by %0.1f degrees.\n", tempDiff);
        } else {
            // temp is too high
            printf("You need to lower the temperature by %0.1f degrees.\n", fabs(tempDiff));
        }
    }  
    return 0;
}
