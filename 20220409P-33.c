/*Question-

Print the pattern given in the sample output using loops.

Input Format

Number of rows in integer

Constraints

Number of rows should be between 0 to 10, otherwise program should print Outside the range

Output Format

The pattern.

Sample Input 0

4
Sample Output 0

*
* *
* * *
* * * *

Solution-*/

#include<stdio.h>
int main()
{
    int row;
    scanf("%d",&row);
   if (row>0&&row<10)
   {
       for (int i = 0; i < row; i++)
       {
           for (int j = 0; j <= i; j++)
           {
               printf("* ");
           }
           printf("\n");
       }
       
       
   }
   else printf("Outside the range"); 
   
    
    return 0;
}