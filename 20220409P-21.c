/*Question-

In this example, you will learn to find the roots of a quadratic equation in C programming.
The standard form of a quadratic equation is:
ax2 + bx + c = 0,
where
a, b and c are real numbers and a != 0
The term b2-4ac is known as the discriminant of a quadratic equation. It tells the nature of the roots.
If the discriminant is greater than 0, the roots are real and different.
If the discriminant is equal to 0, the roots are real and equal.
If the discriminant is less than 0, the roots are complex and different.

Input Format

coefficients a, b and c

Constraints

a, b and c are real numbers and a != 0

Output Format

roots of the quadratic equation

Sample Input 0

2 3 4
Sample Output 0

root1 = -0.75+1.20i and root2 = -0.75-1.20i
Sample Input 1

2 5 1
Sample Output 1

root1 = -0.22 and root2 = -2.28
Sample Input 2

2 0 0
Sample Output 2

root1 = root2 = -0.00

Solution-*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d;
    float x,y,t,u;
    
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    d=b*b-4*a*c;
    if (d>0)
    {
        x=((-b)+ sqrt(d))/(2*a);
        y=((-b)- sqrt (d))/(2*a);
        printf("root1 = %0.2f and root2 = %0.2f\n",x,y);
    }
     if (d==0)
    {   
        y=((-b)- sqrt (d))/(2*a);
        x=y;
        printf("root1 = root2 = %0.2f\n",y);

    }
    if (d<0)
    {
        x=(-b/(2*a));
        t=+(sqrt(-d))/(2*a);
        y=(-b/(2*a));
        u=(sqrt(-d))/(2*a);
        printf("root1 = %0.2f+%0.2fi and root2 = %0.2f-%0.2fi ",x,t,y,u);
    }
    
    return 0;
}
    
    