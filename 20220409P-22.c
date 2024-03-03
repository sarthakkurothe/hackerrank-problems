/*Question-

Given an integer N as input, find whether it is even or not using bitwise operator.

Input Format

50
where:
First line represents the integer N.

Constraints

Value of N can be in the range 0 to 10000.

Output Format

Print whether number is even or odd

Sample Input 0

55
Sample Output 0

Odd

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
   scanf("%d",&n);
 
   if ( n & 1 == 1 )
      printf("Odd\n");
   else
      printf("Even\n");
    
    return 0;
}
