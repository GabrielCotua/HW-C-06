// HW 06 : Gabriel Cotua

#include <stdio.h>
#include <ctype.h>

int valueTarget = 0;
long long factoredNumber = 1;
int i = 0;

int isValueValid(void) // Evaluate if the input is valid
{
    do
    {
        printf("Insert a number between 1 and 20 to get the factorial of: ");
        if (scanf("%lld", &valueTarget) == 1)
        { // If input is not a valid integer
            if (valueTarget < 0 || valueTarget > 20) 
            {
                return 1;
            }

        }
        
    } while ( (valueTarget < 0 || valueTarget > 20) );
    return 0;
}

int isValueValid_1(void) 
{
    printf("Insert a number between 1 and 20 to get the factorial of: ");
    while(scanf("%d", &valueTarget) != 1)
    {
        
        if (valueTarget == 'q' || valueTarget == 0 ) 
        {
            printf("Byebye");
            return 0;
        }
        if (valueTarget < 0 || valueTarget > 20)
        {
            return 1;
        }
        printf("Insert a number between 1 and 20 to get the factorial of: ");
    }
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

    if ( isValueValid_1() )
    {
        getFactorial();
        printf("The factor of your number is: %lld", factoredNumber);
    }
    return 1;
}