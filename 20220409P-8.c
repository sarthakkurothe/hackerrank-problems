/*Question-

In C programming, a character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself. This integer value is the ASCII code of the character.

For example, the ASCII value of 'A' is 65.

What this means is that, if you assign 'A' to a character variable, 65 is stored in the variable rather than 'A' itself.

Now, let's see how we can print the ASCII value of characters in C programming.

Input Format

G

Constraints

Enter only character values

Output Format

ASCII value of G = 71

Sample Input 0

G
Sample Output 0

ASCII value of G = 71

Solution-*/

#include <stdio.h>


int main() {
    char c;
    scanf("%c",&c);
    printf("ASCII value of %c = %d", c, c);
     
  
  
    return 0;
}