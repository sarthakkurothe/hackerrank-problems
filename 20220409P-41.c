/*Question-

According to a study, the approximate level of intelligence of a person can be calculated using the following formula:
i=2 + (y + 0.5x)
Write a program, which will produce a table of values of i, y and x, where y varies from 1 to a given number enter by user and for each value of y, x varies from 5.5 to 7.5 in steps of 0.5.

Input Format

An integer number

Constraints

Entered number should be in range 0 to 11, otherwise program should print Outside the range

Output Format

desired output

Sample Input 0

2
Sample Output 0

y=1, x=5.50 and i=5.75
y=1, x=6.00 and i=6.00
y=1, x=6.50 and i=6.25
y=1, x=7.00 and i=6.50
y=1, x=7.50 and i=6.75
y=2, x=5.50 and i=6.75
y=2, x=6.00 and i=7.00
y=2, x=6.50 and i=7.25
y=2, x=7.00 and i=7.50
y=2, x=7.50 and i=7.75
Explanation 0

Keep in mind the precision of x and i

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int y,z;  
    float i, x;
    
    scanf("%d",&z);      //enter the no

    if(z>=0 && z<=11)    //range of number entered
    {

    
    for(y=1;y<=z;y++)             //condition
    {
        
        for(x=5.5;x<=7.5;x=x+0.5)
        {
            
            i = 2+(y+0.5*x);          

            
            printf("y=%d, x=%.2f and i=%.2f\n",y,x,i);
        }
      
    }
    }
    else
    printf("Outside the range");
    return 0;
}