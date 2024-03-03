/*Question-

Write a C program in which two functions are called:

int * biggest_of_two(int*, int*);
and

int * biggest_of_three(int*, int*, int*);
The first function is passed pointers to two integers. The function should return whichever pointer points to the larger integer. The second function should return whichever pointer points to the largest of the three integers whose addresses are provided.

Input Format

12
-5
50
where:
First line is first number.(N1)
Second line is second number.(N2)
Third line is third number.(N3)

Constraints

-100<N1,N2,N3<100
otherwise print Outside the range
The function for three numbers

int * biggest_of_three(int*, int*, int*);
should use function for two numbers for its calculations.

Output Format

The biggest of 12 and -5 is 12
The biggest of 12, -5 and 50 is 50

Sample Input 0

12
-5
50
Sample Output 0

The biggest of 12 and -5 is 12
The biggest of 12, -5 and 50 is 50

Solution-*/

#include <stdio.h>
int * biggest_of_two(int *p,int *q);
int * biggest_of_three(int *p,int *q,int *r);
int main()
{
  int a;int b; int c;
  scanf("%d%d%d", &a,&b,&c);
  if(c>=100 || c<=-100 || a>=100 || a<=-100 || b>=100 || b<=-100){
  printf("Outside the range");
      return 0;
  }
  int *p;
  p = biggest_of_two(&a,&b);
  printf("The biggest of %i and %i is %i\n", a, b, *p);
  p = biggest_of_three(&a,&b,&c);
  printf("The biggest of %i, %i and %i is %i\n", a, b, c, *p);
  return 0;
}
int * biggest_of_two(int *p,int *q)
{
    if(*p>*q)
    return p;
    else
    return q;
}
int* biggest_of_three(int * p, int * q, int * r)
{
    int *z=biggest_of_two(p,q);
    return biggest_of_two(z,r);
}