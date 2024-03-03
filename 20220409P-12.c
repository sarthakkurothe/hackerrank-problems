/*Question-

In this example, you will learn to evaluate the size of each variable using sizeof operator.
In this program, 4 variables intType, floatType, doubleType and charType are declared.
Then, the size of each variable is computed using the sizeof operator.

Input Format

Nothing

Constraints

Nothing

Output Format

Size of int: 4 bytes Size of float: 4 bytes Size of double: 8 bytes Size of char: 1 byte

Sample Output 0

Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of char: 1 byte

Solution-*/

#include <stdio.h>


int main(void) 
    {
    printf("Size of int: %lu bytes\n",sizeof(int));
    printf("Size of float: %lu bytes\n",sizeof(float));
    printf("Size of double: %lu bytes\n",sizeof(double));
    printf("Size of char: %lu byte\n",sizeof(char));

    return 0;
}