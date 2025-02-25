// HW 06 : Gabriel Cotua

#include <stdio.h>
#include <ctype.h>

int valueTarget = 0;
long long factoredNumber = 1;
int i = 0;

int isValueValid(void) 
{
    printf("Insert a number between 1 and 20 to get the factorial of: ");
    scanf("%d", &valueTarget);

    while( ( valueTarget < 0 || valueTarget > 20 ) )
    {
        printf("Insert a number between 1 and 20 to get the factorial of: ");
        scanf("%d", &valueTarget);
    }
    return 1;
}

void getFactorial(void) // Returns factorial result
{
    for (i = 1; i <= valueTarget; ++i)
    {
        factoredNumber *= i;
    }
}

int main(void) // Runner function
{

    printf("\n\n|#####################|\n|HW #06, Gabriel Cotua|\n|#####################|\n\n");

    if ( isValueValid() )
    {
        getFactorial();
        printf("The factor of your number is: %lld", factoredNumber);
    }
    return 1;
}