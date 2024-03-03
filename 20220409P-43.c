/*Question-

A machine is purchased which will produce earning of some rupees (enter by user) per year while it lasts. The machine costs some rupees (enter by user) and will have a salvage of Rs. 100 when it is condemned. If 12 percent per annum can be earned on alternate investments.
what would be the minimum life of the machine to make it a more attractive investment compared to alternative investment?

Input Format

Machine cost
Profit per year

Constraints

Earning and machine cost should be between 100 and 1000, otherwise program should print Outside the range
Printed minimum year should be the one after which profit may start in next year.

Output Format

Minimum years, see sample output for exact representation

Sample Input 0

600
300
Sample Output 0

Minimum life of machine 5 years

Solution-*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int machine_cost;
    int profit_per_year;
    int year=0;
    float invest;
    float alternate_invest;
    
    scanf("%d",&machine_cost);
    scanf("%d",&profit_per_year);
    alternate_invest = machine_cost;
    
    if ( ( machine_cost > 100 && machine_cost < 1000 ) && ( profit_per_year > 100 && profit_per_year < 1000 ) ) 
    {

      
      while(1)
      {
        year++;
        alternate_invest= (float) alternate_invest * 1.12; 
        invest =(float)( (profit_per_year*year)- (machine_cost-100) );
          
         if(alternate_invest<invest)
         {
          year = year-1;
          break;
         }
      }

        printf("Minimum life of machine %d years",year);

 
    }
    else 
    {
         printf("Outside the range");

    }

    return 0;
}