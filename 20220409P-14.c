/*Question-

Given an integer and floating point number, find their division and print the result up to 3 places after the decimal point.

Input Format

6
2.5

where:
First line represents the integer value.
Second line represents the floating value.

Constraints

Output displays the division of the integer and float number, and precision is upto 3 places.

Output Format

2.400

Sample Input 0

6
2.5
Sample Output 0

2.400

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    float y;
    scanf("%d",&x);
    scanf("%f",&y);
    printf("%.3f",x/y);
   
    return 0;
}
