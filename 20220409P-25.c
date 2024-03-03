/*Question-

Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

Input Format

-2,2
2,5
6,8

where:
First line represents first point.
Second line represents second point.
Third line represents third point.

Constraints

Nothing

Output Format

All 3 points lie on the same line
or
All 3 points do not lie on the same line

Sample Input 0

-2,2
2,5
6,8
Sample Output 0

All 3 points lie on the same line

Solution-*/

#include<stdio.h>
int main()
{
    

int x1,y1,x2,y2,x3,y3,A;
    scanf("%d,%d\n",&x1,&y1);
    scanf("%d,%d\n",&x2,&y2);
    scanf("%d,%d",&x3,&y3);
    A=((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2;
    if(A==0)
    {
        printf("All 3 points lie on the same line");
    }
    else
    {
        printf("All 3 points do not lie on the same line");
    }
    
    return 0;
    
}