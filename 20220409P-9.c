/*Question-

Write a program in C which reads a real number representing the radius of a circle. The program will then print out the area of the circle using the formula: area = π*r*r, you need to use π to 10 decimal places is 3.1415926535. Also, declare π as a named constant.

Input Format

5

Constraints

Print area upto 10 decimal places.
Radius should also be in double.

Output Format

78.5398163375

Sample Input 0

5
Sample Output 0

78.5398163375

Solution-*/

#include <stdio.h>

int main()
{
    double radius;
    scanf("%lf",&radius);
    printf("%0.10lf",3.1415926535*radius*radius);
    return 0;


}