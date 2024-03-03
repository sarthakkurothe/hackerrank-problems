/*Question-

Given Principal Amount P, Rate of Interest per year R and Number of Years T. Calculate simple interest.

Simple interest = ( Principle amount * Rate of Interest * Number of Years ) / 100

Input Format

50000 2.5 2

Where,

First line represents principal amount P. Second line represents a rate of interest R. Third line represents a number of years T.

Constraints

Assume that,

P is an integer within the range (0 to 2,147,483,647).
R is a double within the range (0 to 1000).
T is an integer within the range (0 to 2,147,483,647).
Output Format

2500.00

Sample Input 0

50000
2.5
5
Sample Output 0

6250.00

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int y,p;
    float r;
    scanf("%d",&p);
    scanf("%f",&r);
    scanf("%d",&y);
    printf("%.2f",p*r*y/100);
    return 0;
}