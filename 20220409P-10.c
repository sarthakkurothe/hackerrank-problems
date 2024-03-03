/*Question-

Ram’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary.

Gross salary = basic salary + dearness allowance + house rent allowance

Input Format

User will enter basic salary in long integer.

Constraints

Gross salary should be truncated to significant digits only.

Output Format

The Gross salary

Sample Input 0

32500
Sample Output 0

52000

Solution-*/

#include <stdio.h>

int main() {
    long int sal;
    double result;
    scanf("%ld",&sal);
    result = (double)sal + (double)0.4*sal+(double)0.2*sal;
    printf("%lg",result);
    return 0;
}