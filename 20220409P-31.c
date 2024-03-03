/*Question-

Write a program to to calculate GCD of two integers (for both positive and negative integers) using loops and decision making statements.
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

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, n1, n2, j, hcf=1;
    scanf("%d", &n1);  
    scanf("%d", &n2);
    j = (n1<n2) ? n1 : n2;
    if(n1>-1000&&n1<1000)
    {    
        if(n2>-1000&&n2<1000)
        {
           for(i=1; i<=abs(j); i++)
           {
               if(n1%i==0 && n2%i==0)  
               {
                   hcf = i;  
               }  
           }
            printf("GCD = %d",hcf);
        }
        else
            printf("Outside the range");
        
    }
    else
        printf("Outside the range");     
    return 0;
}