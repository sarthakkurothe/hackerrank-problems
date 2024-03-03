/*Question-

Write a program in c which reads two integers, then calls the swap function to swap them. The program doesn’t work with call by value. Alter the function to use call by reference.

Input Format

30
20
where:
First line is first number (N1)
Second line is second number(N2)

Constraints

1<N1<=100 
1<N2<=80
Otherwise, print Outside the range

Output Format

First number is 20
Second number is 30

Sample Input 0

30
20
Sample Output 0

First number is 20
Second number is 30

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void swap (int, int);
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>1 && a<=100 && b>1 &&b<=80){
        swap(a,b);
    }
    else{
        printf("Outside the range");
        
    }
    return 0;
}
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("First number is %d\nSecond number is %d",x,y);
}
