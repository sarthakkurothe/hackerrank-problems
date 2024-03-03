/*Question-

In this example, you will learn to check whether a number entered by the user is even or odd Using the Ternary Operator.

Input Format

A Number.

Constraints

Entered number will be an integer

Output Format

whether entered number is odd or even

Sample Input 0

33
Sample Output 0

33 is odd.

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int x;
    scanf("%d",&x);
    int c=x%2;
    if (c==0)
    {
        printf("%d is even.",x);
    }
    else
    printf("%d is odd.",x);
    return 0;
}