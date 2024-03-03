/*Question-

An even number is an integer that is exactly divisible by 2. For example: 0, 8, -24

An odd number is an integer that is not exactly divisible by 2. For example: 1, 7, -11, 15

Input Format

A number

Constraints

Nothing

Output Format

Print whether number is odd or even.

Sample Input 0

2
Sample Output 0

2 is even.
Sample Input 1

17
Sample Output 1

17 is odd.

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
