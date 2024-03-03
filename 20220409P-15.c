/*Question-

Given two integers N1 and N2, perform their division as a floating-point operation.

Input Format

17
5
where:
First line represents the first integer N1.
Second line represents the second integer N2.

Constraints

Output displays the exact division of the given two integers as a floating point number.

Output Format

3.400000

Sample Input 0

3659874
25
Sample Output 0

146394.953125
Sample Input 1

5
4
Sample Output 1

1.250000

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    float d=(float)x/(float)y;
    printf("%f",d);

    return 0;
}