/*Question-

An Insurance company follows following rules to calculate premium.

If a person’s health is excellent and the person is between 25 and 35 years (including both) of age and lives in a city and is a male then the premium is Rs. 4 per thousand and his policy amount cannot exceed Rs. 2 lakhs.
If a person satisfies all the above conditions except that the sex is female then the premium is Rs. 3 per thousand and her policy amount cannot exceed Rs. 1 lakh.
If a person’s health is poor and the person is between 25 and 35 years (including both) of age and lives in a village and is a male then the premium is Rs. 6 per thousand and his policy cannot exceed Rs. 10,000.
In all other cases the person is not insured.

If other cases Input unspecified.

Write a program to output whether the person should be insured or not, his/her premium rate and maximum amount for which he/she can be insured.

Input Format

E
26
C
M
5000

where:
First line is health condition (E- Excellent, P- Poor) Second line is Age in integer Third line is where he lives (C- city, V-village) Fourth line is gender (M- male, F-female) Fifth line is amount in double

Constraints

If user enters value which is not mentioned in question. Program should print "Input unspecified."

Output Format

Output for all categories should be one of following: 1. Policy amount exceed the limit. 2. Insurance amount. 3. You can not be insured. 4. Input unspecified.

Sample Input 0

E
26
C
M
5000
Sample Output 0

20.000000

Solution-*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    char cond,city,gender;
    int age;
    double amnt,pre;
    scanf("%c %d %c %c %lf",&cond,&age,&city,&gender,&amnt);
    switch (cond)
 {
    case 'E':
    if (age>=25 && age<=35)
    {
        switch(city)
        {
        case 'C':
            switch (gender)
            {
            case 'M':
                if (amnt<200000)
                {
                    pre=amnt/1000;
                  printf("%lf",pre*4);
                }
                else printf("Policy amount exceed the limit.");
                break;
            case 'F':
                  if (amnt<100000)
                {
                    pre=amnt/1000;
                  printf("%lf",pre*3);
                }
                  else printf("Policy amount exceed the limit.");
                break;
            default:printf("Input unspecified.");
            }
        break;
        case 'V':
        printf("You can not be insured.");
        break;
        default:printf("Input unspecified.");
            break;
        }
    }
    else printf("You can not be insured.");
        break;
    case 'P':
    if (age>=25 && age<=35)
      {
        switch(city)
        {
        case 'V':
            switch (gender)
            {
            case 'M':
                if (amnt<10000)
                {
                    pre=amnt/1000;
                  printf("%lf",pre*6);
                }
                else printf("Policy amount exceed the limit.");
                break;
            case 'F':
                 printf("You can not be insured.");
                break;
            default:printf("Input unspecified.");
                break;
            }
            break;
        case 'C':printf("You can not be insured.");
        default:printf("Input unspecified.");
            break;
        }
    }
    else printf("You can not be insured.");
            break;
    default:printf("Input unspecified.");
        break;
 }
    
    return 0;
}