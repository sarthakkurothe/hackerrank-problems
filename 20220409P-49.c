/*Question-

Write a C program which reads two integers. Then a function with the following prototype is called:

void div_rem(int a, int b, int *divides, int *remains);
This function is passed the two integers. It divides them (using integer division), and writes the answer over wherever “divides” points. Then it finds the remainder and writes it into where “remains” points.
Thus for 20 and 3, 20 divided by 3 is 6, remainder 2. Implement the div_rem function.

Input Format

20
3
where
First line is first interger (N1).
Second line is second integer (N2).

Constraints

0<N1,N2<100
Otherwise print Outside the range.

Output Format

See sample output.

Sample Input 0

20
3
Sample Output 0

20 divided by 3 = 6 and remainder is 2

Solution-*/

#include <stdio.h>
#include <stdlib.h>
int division(int,int);
int rem(int,int);
int main()
{
    int num1,num2,result,remi;
 
    scanf("%d %d",&num1,&num2);
    if(num1>0 && num2<100){
        
    
    result=division(num1,num2);
    remi=rem(num1,num2);
     printf("%d divided by %d = %d and remainder is %d ", num1,num2, result,remi);
    }else
        printf("Outside the range");
    
    return 0;
}
int division(int a, int b)
{
        return a/b;
    }
int rem(int x, int y)
{
    return x%y;
}