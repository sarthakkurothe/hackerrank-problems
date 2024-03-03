/*Question-

Given two integers N1 and N2 as input, find whether they are equal or not using bitwise operator.

Input Format

Input:
5
5

where:

First line represents the integer N1.
Second line represents the integer N2.

Constraints

Value of N1 and N2 can be in the range -10000 to 10000.

Output Format

Same or Different

Sample Input 0

15
15
Sample Output 0

Same

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int num1,num2;

    scanf("%d%d",&num1,&num2);

    if((num1 ^ num2) == 0)
        printf("Same\n");
    else
        printf("Different\n");
    return 0;
}