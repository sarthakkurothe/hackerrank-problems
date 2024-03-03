/*Question-

In this program, you will learn to generate the multiplication table of a number entered by the user.

Input Format

11
8

where
First line is an integer value for which table need to be generated.
Second lie is an integer value of range upto which table need to be generated.

Constraints

Program should generates the multiplication tables starting from 1 to range entered by user.
Number should be between 1 to 20. If not output should be "Outside the range".

Output Format

Table in the format give in sample output.

Sample Input 0

11
8
Sample Output 0

11 * 1 = 11
11 * 2 = 22
11 * 3 = 33
11 * 4 = 44
11 * 5 = 55
11 * 6 = 66
11 * 7 = 77
11 * 8 = 88

Solution-*/

#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n>1&&n<20)
    {if(m>=0)
    { for(int i=1;i<=m;++i)
    printf("%d * %d = %d \n",n,i,n*i);
    }
    }
    else 
    printf("Outside the range");
    return 0;
}