/*Question-

In this example, you will learn to calculate the factorial of a number entered by the user.
The factorial of a negative number doesn't exist. And, the factorial of 0 is 1.

Input Format

5

Constraints

Number should be between 0 to 500. Otherwise it should print "Outside the range"

Output Format

Factorial of 5 = 120

Sample Input 0

-5
Sample Output 0

Error! Factorial of a negative number doesn't exist.

Solution-*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,fact=1;
    scanf("%d",&num);
    if (num==0)
    {
        printf("%d",fact);
    }
    else if (num<0)
    {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else if (num>0&&num<500)
    {
    for (int i = 1; i <= num; i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d = %d",num,fact);
    }
    else if (num>=500)
    {
        printf("Outside the range");
    }
    
    return 0;
}
