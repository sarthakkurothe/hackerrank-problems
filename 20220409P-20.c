/*Question-

A five digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

Input Format

An integer number.

Constraints

Entered number should be integer between 10000 to 99999. If number is out of this range it should print
Outside the range.

Output Format

Reversed number and whether it is same or not

Sample Input 0

11111
Sample Output 0

11111
Same
Sample Input 1

24987
Sample Output 1

78942
Different

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,a,b,c,d,e,n;
    scanf("%d",&x);
    if(x>=10000 && x<=99999)
    {
        e=x%10;
        d=(x/10)%10;
        c=(x/100)%10;
        b=(x/1000)%10;
        a=(x/10000);
        n=(e*10000)+(d*1000)+(c*100)+(b*10)+a;
        printf("%d",n);
        if(n==x)
        {
            printf("\nSame");
        }
        else
        {
            printf("\nDifferent");
        }
    }
    else
    {
        printf("Outside the range.");
    }
    return 0;
}
