/*Question-

Write a program in C to find largest element in the array.

Input Format

N1
series of numbers. See standard input for more information

Constraints

1<=N1<=100
Otherwise:
Program should print Error! number should in range of (1 to 100).

Output Format

Largest element in the array.

Sample Input 0

5
34.5
2.4
-35.5
38.7
24.5
Sample Output 0

Largest element = 38.70

Solution-*/

#include <stdio.h>
int main() {
  int n;
  double arr[100];
 
  scanf("%d", &n);
if(n>=1 && n<=100){
    

  for (int i = 0; i < n; ++i) {
   
    scanf("%lf", &arr[i]);
  }


  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.2lf", arr[0]);
}
    else{
        printf("Error! number should in range of (1 to 100).");
    }
        
    
  return 0;
}
