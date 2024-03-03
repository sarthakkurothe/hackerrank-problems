/*Question-

Given two numbers N1 and N2, interchange values of the variable and print it.

Input Format

Two double number entered by the user in the same line with a space between them.

Constraints

All numbers are of double.

Output Format

interchanged value with only significant digits

Sample Input 0

10 4
Sample Output 0

4 10

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    double t = x;
    x = y;
    y = t;
    printf("%g %g", x, y);

    return 0;
}
