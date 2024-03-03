/*Question-

Write a program to to calculate GCD of two integers (for both positive and negative integers) using recursion.
The HCF or GCD of two integers is the largest integer that can exactly divide both numbers (without a remainder).

Input Format

Two signed integer numbers.

Constraints

Number entered by the user should be from the range -1000 to 1000, otherwise program should print Outside the range.
User can enter one or both numbers as negative also.

Output Format

The GCD

Sample Input 0

-81
153
Sample Output 0

GCD = 9

Solution*/

#include <stdio.h>
int gcd(int x, int y);
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n>=-1000 && n<=1000 && m>=-1000 && m<=1000)
    {
        if(n<0)
            n = -1*n;
        if(m<0)
            m = -1*m;
        gcd(n,m);
    }
    else 
        printf("Outside the range");
    
}
int gcd(int x, int y)
{
    int g;
    if(x==0)
        g=y;
    else if (y==0)
        g=x;
    else{
        for(int i=1; i<=x && i<+y; i++)
        {
            if(x%i==0 && y%i==0)
                g = i;
        }
    }
    printf("GCD = %d",g);
    return 0;
}