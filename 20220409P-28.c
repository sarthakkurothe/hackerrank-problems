/*Question-

In this example, you will learn to calculate the sum of natural numbers entered by the user.

Input Format

A natural number.

Constraints

Number should be between 1 to 500. If not output should be "Outside the range".
If user enters a negative number program should contiue to read numbers till there is a positive number.

Output Format

Sum of natural numbers

Sample Input 0

10
Sample Output 0

Sum = 55
Sample Input 1

-10
-5
10
Sample Output 1

Sum = 55

Solution-*/

 #include<stdio.h>
int main()
{
    int n, i, sum = 0;
    do {scanf("%d", &n);} 
    while (n < 0);
    if(n>=1&&n<=500)
    {
    for (i = 0; i <= n; i++)
     {
        sum=sum+i;
     }
    printf("Sum = %d", sum);
    }
    else printf("Outside the range");
    return 0;
}