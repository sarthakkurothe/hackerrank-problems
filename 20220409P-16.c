/*Question-

Given two float numbers, add them and print the result in long int.

Input Format

34563.6789
12345.9888
where:
First line represents the first floating point number.
Second line represents the second floating point number.

Constraints

Output displays the result in long int format.

Output Format

46909

Sample Input 0

25.6
32.5
Sample Output 0

58

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float x,y;
    scanf("%f",&x);
    scanf("%f",&y);
    long d=x+y;
    printf("%ld",d);

        
    return 0;
}
