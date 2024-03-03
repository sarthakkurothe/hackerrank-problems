/*Question-

A c program contains the following statements:

int i;

long ix;

short s;

unsigned u;

float x;

double dx;

char c;

For each of the following groups of variables, write a scanf function that will allow a set of data items to be read into the computer and assigned to the variables. Assume that all integer will be read in as decimal quantities.

Input Format

10 -15524 240 405060 3252.131211 3322.1547954136 %

Constraints

The float should print only 4 decimal places and double should print upto 10 decimal places.

Output Format

10 -15524 240 405060 3252.1311 3322.1547954136 %

Sample Input 0

10
-15524
240
405060
3252.131211
3322.1547954136
%
Sample Output 0

10
-15524
240
405060
3252.1311
3322.1547954136
%

Solution-*/

#include <stdio.h>

int main(void) {
    
    int i;
    long ix;
    short s;
    unsigned u;
    float x;
    double dx;
    char c;
    //scan
    scanf("%d",&i);
    scanf("%ld",&ix);
    scanf("%hd",&s);
    scanf("%u",&u);
    scanf("%f",&x);
    scanf("%lf",&dx);
    scanf(" %c",&c);
    
    //print
    printf("%d\n",i);
    printf("%ld\n",ix);
    printf("%hd\n",s);
    printf("%u\n",u);
    printf("%.4f\n",x);
    printf("%.10lf\n",dx);
    printf("%c",c); 
    return 0;
}