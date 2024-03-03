/*Question-

In this example, you will learn to find the quotient and remainder when an integer is divided by another integer.
In this program, the user is asked to enter two integers (dividend and divisor). They are stored in variables dividend and divisor respectively.
Then the quotient is evaluated using / (the division operator), and stored in quotient.
Similarly, the remainder is evaluated using % (the modulo operator) and stored in remainder.

Input Format

User will enter first dividend and then divisor as integer.

Constraints

All variables in this program are integers.

Output Format

Quotient = 6 Remainder = 1

Sample Input 0

10
7
Sample Output 0

Quotient = 1
Remainder = 3

Solution*/

#include <stdio.h>

int main() 
{
    int a,b,q,r;
    scanf("%d",&a);
    scanf("%d",&b);
    q=a/b;
    r=a%b;
    printf("Quotient = %d\nRemainder = %d",q,r);
      
    return 0;
}