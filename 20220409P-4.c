/*Question-

Write a program in c to read a float type number from a keyboard using scanf and display it using printf.

Input Format

10.5

Constraints

Entered number should be in float. Output should truncate the number to two decimal places.

Output Format

Number is 10.50

Sample Input 0

10.5
Sample Output 0

Number is 10.50

Solution-*/

#include<stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    printf("Number is %0.2f",x);
    return 0;
}
