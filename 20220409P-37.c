/*Question-

Print the pattern given in the sample output using loops.

Input Format

Number of rows in integer

Constraints

Number of rows should be between 1 to 10, otherwise program should print Outside the range

Output Format

The pattern.

Sample Input 0

4
Sample Output 0

   1
  2 2
 3 3 3
4 4 4 4

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int r,i,j,k,spc;
    scanf("%d",&r);
    spc=r-1;
    if(r>0 && r<10)
    {
        for(i=1;i<=r;i++)
        {
            for(k=spc;k>=1;k--)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
        printf("\n");
        spc--;
        }
    }
    else
    {
        printf("Outside the range");
    }
    
    return 0;
}