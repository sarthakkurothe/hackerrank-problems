/*Question-

Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

Input Format

21
2

where
First line is number
Second line is power

Constraints

The number should be in range of 1 to 100.
Power should be in range of 1 to 20.
Take data type of result variable so that it can store the maximum value.

Hint- Take result as long int.

Output Format

441

Sample Input 0

21
2
Sample Output 0

441

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int a,b;
    long c;
    scanf("%d",&a);
    scanf("%d",&b);
    c = pow(a,b);
    
    printf("%ld",c);   
    return 0;
}