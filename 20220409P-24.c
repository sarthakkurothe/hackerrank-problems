/*Question-

In this example, you will learn to check whether the year entered by the user is a leap year or not.

Input Format

User will enter year.

Constraints

input should be from 1111 to 9999. If input is not in this range, program should print Outside the range

Output Format

Leap year or Non-Leap year

Sample Input 0

1600
Sample Output 0

1600 is a leap year.
Sample Input 1

1700
Sample Output 1

1700 is not a leap year.

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int year;
   scanf("%d", &year);

 
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0)
   {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
