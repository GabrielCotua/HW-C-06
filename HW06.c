// HW 06 Gabriel Cotua

#include <stdio.h>
#include <ctype.h>

int valueTarget = 0;
long long factoredNumber = 1;

int isValueValid(void)
{
    printf("Insert a number between 1 and 20 to get the factorial of: ");

    if (scanf("%d", &valueTarget) != 1)
    {
        while (getchar() != '\n'); // Clear invalid input

        printf("Invalid input. Please enter a valid integer.\n");
        return 0; // Keep asking for input
    }

    if (valueTarget < 1 || valueTarget > 20)
    {
        printf("Number out of range. Try again.\n");
        return 0; // Keep asking for input
    }

    return 1; // Valid input
}

void getFactorial(void)
{
    factoredNumber = 1; // Reset factorial value before calculation
    for (int i = 1; i <= valueTarget; ++i)
    {
        factoredNumber *= i;
    }
}

int main(void)
{
    printf("\n\n|#####################|\n|HW #06, Gabriel Cotua|\n|#####################|\n\n");

    while (!isValueValid()); // Keep asking until valid input

    getFactorial();
    printf("The factorial of your number is: %lld\n", factoredNumber);

    return 0;
}

/*

    [Expected output]

|#####################|
|HW #06, Gabriel Cotua|
|#####################|

Insert a number between 1 and 20 to get the factorial of: a
Invalid input. Please enter a valid integer.
Insert a number between 1 and 20 to get the factorial of: s
Invalid input. Please enter a valid integer.
Insert a number between 1 and 20 to get the factorial of: 100
Number out of range. Try again.
Insert a number between 1 and 20 to get the factorial of: 29
Number out of range. Try again.
Insert a number between 1 and 20 to get the factorial of: 22
Number out of range. Try again.
Insert a number between 1 and 20 to get the factorial of: 0
Number out of range. Try again.
Insert a number between 1 and 20 to get the factorial of: 20
The factorial of your number is: 2432902008176640000


                Expected outputs
                
        INPUT                      OUTPUT
        22              Number out of range. Try again.
        20      The factorial of your number is: 2432902008176640000
        a           Invalid input. Please enter a valid integer.

*/