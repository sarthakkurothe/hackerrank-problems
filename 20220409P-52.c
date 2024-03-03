/*Question-

Write a program in C to Add Two Matrices Using Multi-dimensional Arrays.

Input Format

Number of row (N1)
Number of column (N2)

N1 and N2 is same for two matrices.

Then series of numbers. See sample input for more detail.

Constraints

1<=N1<=100
1<=N2<=100
Output Format

Matrix with addition.

Sample Input 0

101
23
Sample Output 0

Error! number should in range of (1 to 100).
Sample Input 1

2
2
1
2
3
4
5
6
7
8
Sample Output 1

Sum of two matrices: 
6 8
10 12

Solution-*/

#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j;

      scanf("%d", &r);
  
      scanf("%d", &c);
    if(r>0 && r<100 && c>0 &&c<100){
     for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {

      scanf("%d", &a[i][j]);
    }
       for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
   
      scanf("%d", &b[i][j]);
    }
     for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
    printf("Sum of two matrices:\n");
     for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
        
        printf("%d ", sum[i][j]);
        if (j == c - 1) {
           printf("\n");
      }
    }
     }   else
   {
          printf("Error! number should in range of (1 to 100).");
    }

           return 0;
   }