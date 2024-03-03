/*Question-

Write a C program to check whether a number is prime or not using user-defined functions.

Input Format

An integer number

Constraints

The number should be between 0 to 100, otherwise it should print Outside the range

Output Format

Prime or Not prime

Sample Input 0

7
Sample Output 0

Prime

Solution-*/

#include <stdio.h>
void checkPrimeNumber(int n)
{
    int x;
    for(x=2;x<n;x++)
    {
        if(n%x==0)
        {
            printf("Not prime");
            break;
        }
        else
        {
            printf("Prime");
            break;
        }
    }
    if(n==2)
    {
        printf("Prime");
    }
    if(n==1)
    {
        printf("Not prime");
    }
  
}

int main() 
{

    int n1;
    scanf("%d", &n1);
    if(n1>0 && n1<100)
    {
        checkPrimeNumber(n1);
    }
    else
    {
        printf("Outside the range");
    }
   return 0;
}