/*Question-

In this program, you will learn to count the number of digits in an integer entered by the user.

Input Format

An integer number.

Constraints

Number should be in the range of 1 to 99999, otherwise program should print Outside the range.

Output Format

An integer

Sample Input 0

2549
Sample Output 0

Number of digits: 4

Solution-*/

#include<stdio.h>
int main()
{
   int num,count=0;
   scanf("%d",&num);
   if (num>=1&&num<=99999)
   {
       while (num!=0)
       {
           num=num/10;
           count++;
       }
       printf("Number of digits: %d",count);
       
   }
   else printf("Outside the range");
    return 0;
}