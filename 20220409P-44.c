/*Question

In this example, you will learn to calculate the factorial of a number entered by the user.
The factorial of a negative number doesn't exist. And, the factorial of 0 is 1.

Input Format

5

Constraints

Number should be between 0 to 500. Otherwise it should print "Outside the range"

Output Format

Factorial of 5 = 120

Sample Input 0

-5
Sample Output 0

Error! Factorial of a negative number doesn't exist.

Solution-*/

#include <stdio.h>

int fact(int n)
{
  if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}
int main() {
    int n;
    unsigned long long facto = 1;
   
    scanf("%d", &n);
    
    if(n<0){
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else{
        if(n>=500)
        {
            printf("Outside the range");
        }
        else
        { 
            facto=fact(n);
            printf("Factorial of %d = %llu", n, facto);
        }
    }
    
    return 0;
}