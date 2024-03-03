/*Question

The natural logarithm can be approximated by the following series.

image
If x is input through the keyboard and passed to the function, write a program to calculate the sum of first seven terms of this series.

Input Format

An integer number

Constraints

The entered number should be in the range of 1 to 50, otherwise program should print Outside the range

Output Format

Sum of first 7 digits.

Sample Input 0

3
Sample Output 0

Log(3) = 1.27

Solution-*/

#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float x,d,p,r,res=0;
    scanf("%f", &x);
    d=(x-1)/x;
   if(x<1 || x> 50){
       printf("Outside the range");}
    else if(x>1 || x<50){
    for(i=2;i<=7;i++)
    {
        p = pow(d,i);
        r = p/2;
        res = res + r;
    }
   
    res = d + res;
    printf("Log(%.0f) = %.2f",x,res);
    }
}