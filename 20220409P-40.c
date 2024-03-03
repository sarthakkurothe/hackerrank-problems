/*Question-

Write a menu driven program which has following options:
1. Factorial of a number.
2. Prime or not
3. Odd or even
4. Exit
Once a menu item is selected the appropiate action should be taken and once the action is finished, the menu should reappear. Unless the user selects the 'Exit' option the program should continue to work.

Hint: Make use of an infinite while and a switch statement. You can use exit(0); function to terminate the program.
You can reuse the code of these functions.

Input Format

1
3
2
11
4

where:
first line is the choice
second line is the number for first choice
third line is the choice
fourth line is the number for second choice
fifth line exit the program.

Constraints

Number should be in range 1 to 50, otherwise program should print Outside the range

Output Format

Factorial value is 6 Prime number or Not prime Odd or Even

Sample Input 0

1
4
2
16
3
41
4
Sample Output 0

Factorial value is 24
Not prime
Odd
Explanation 0

All options are run one by one producing the desired result.

Solution-*/

#include <stdio.h>
#include <stdlib.h>
int factorial(int x);

int check_prime(int y);

int check_even(int z);

int main() {
    int n=0;
    int choice[100000];
    int data[100000];
    for(int i=0; 1; i++)
    {
        scanf("%d", &choice[i]);
        if(choice[i]!=4)
        {
            scanf("%d", &data[i]);
            n++;
        }
        else
            break;
    }
    for(int i=0; i<n; i++)
    {
        if(choice[i]==1)
            factorial(data[i]);
        else if(choice[i]==2)
            check_prime(data[i]);
        else if(choice[i]==3)
            check_even(data[i]);
    }
   
}

int check_prime(int y)
{
    if(y>=1 && y<=50)
    {
    int c=0;
    for(int i=1; i<=y; i++)
    {
        if(y%i==0)
            c++;
    }
    if(c==2)
        printf("Prime number \n");
    else
        printf("Not prime \n");
    }
    else 
        printf("Outside the range\n");

    return 0;
}

int check_even(int z)
{
    if(z>=1 && z<=50)
    {
    if(z%2==0)
        printf("Even \n");
    else
        printf("Odd \n");
    }
    else 
        printf("Outside the range\n");

    return 0;
}

int factorial(int x)
{
    if(x>=1 && x<=50)
    {
    unsigned long long int f=1;
    if(x==1)
        f=1;
    else
    {
        for(int i=1; i<=x; i++)
            f = f*i;
    }
    printf("Factorial value is %llu \n",f);
    }
    else 
        printf("Outside the range\n");

    return 0;
}