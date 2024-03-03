/*Questiion-

Write a program in C which calculates average of number stored in arrays. User will enter number of elements and then enter elements to calculate the average.

Input Format

N1
series of numbers. See standard input for more information

Constraints

1<=N1<=100
Otherwise:
Program should print Error! number should in range of (1 to 100).

Output Format

Average of all numbers

Sample Input 0

5
23.1
22.6
45.6
-43.1
22.9
Sample Output 0

Average = 14.22

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y;
    float num[100], sum=0.0,avg;
    scanf("%d", &x);
   if(x>100 || x<1){
       printf("Error! number should in range of (1 to 100).");
       return 0;
   }
    for (y=0;y<x;++y)
    {
        scanf("%f", &num[y]);
        sum += num[y];
    }
    avg = sum/x;
    printf("Average = %.2f\n", avg);
    return 0;
}