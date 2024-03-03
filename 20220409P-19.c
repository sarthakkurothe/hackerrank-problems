/*Question-

Write a program which “quantifies” numbers. Read an integer “x” and test it, producing the following output:
x greater than or equal to 1000
print “hugely positive”
x from 999 to 100 (including 100,999)
print “very positive”
x between 100 and 0
print “positive”
x exactly 0
print “zero”
x between 0 and -100
print “negative”
x from -100 to -999 (including -100,-999)
print “very negative”
x less than or equal to -1000
print “hugely negative”

Input Format

An Integer

Constraints

The integer entered by the user should be between -5000 to 5000. If user enter number outside this range it should print "Outside the range"

Output Format

Desired print value.

Sample Input 0

5
Sample Output 0

positive

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int x;
    scanf("%d",&x);
     if (x==0)
    {
        printf("zero");
    }
    else if (x>=1000 && x<5000)
    {
        printf("hugely positive");
    }
    else if (x>=100 && x<=999)
    {
        printf("very positive");
    }
    else if (x>0 && x<100)
    {
        printf("positive");
    }
    else if (x<0 && x>-100)
    {
        printf("negative");
    }
    else if (x<=-100&&x>=-999) 
    {
        printf("very negative");
    }
    else if (x<=-1000&& x>-5000)
    {
        printf("hugely negative");
    }
    else if (x>=5000 || x<=-5000)
    {
    printf("Outside the range");
    }
    return 0;
}