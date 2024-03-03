/*Question-

Find the Fibonacci numbers at a paticular point if 0 is at 1 sequence. These are the numbers in the following integer sequence.
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

Write a C program for that using recursion.

Input Format

Number of terms (N)

Constraints

1<=N<=15
Otherwise print Outside the range

Output Format

fibo number

Sample Input 0

9
Sample Output 0

34

Solution-*/

#include<stdio.h>
int fib(int n);
int main(){
    int x,y,n;
    scanf("%d",&n);
    if(n<1 || n>15){
        printf("Outside the range");
        
    }else{
        for(x=1;x<=n;x++)
        {
            y=fib(x);
            }
    printf("%d",y);
        return 0;
    
    }
    
}
int fib(int n){
    if(n==0 || n==1){
        return n;
    
    }
else {
    return (fib(n-1)+fib(n-2));
     }

}