#include <stdio.h>
void main ()
{
    int s, rn1, in1, rn2, in2;
    printf ("Enter any imaginary number:\nEnter Real part: ");
    scanf ("%d", &rn1);
    printf ("Enter Imaginary part: ");
    scanf ("%d", &in1);
    printf ("Your number is %d+%di", rn1, in1);
    printf ("\nEnter another imaginary number:\nEnter Real part: ");
    scanf ("%d", &rn2);
    printf ("Enter Imaginary part: ");
    scanf ("%d", &in2);
    printf ("Your another number is %d+%di", rn2, in2);
    printf ("\nWhat action do you want to do?\nEnter 1 to add them");
    printf ("\nEnter 2 to subtract 2nd number from 1st number");
    printf ("\nEnter 3 to multiply\nEnter 4 to divide\n");
    scanf ("%d", &s);
    switch (s)
    {
        case 1: printf ("Addition is %d+%di", rn1+rn2, in1+in2);
                break;
        case 2: printf ("Substraction is %d+%di", rn1-rn2, in1-in2);
                break;
        case 3:
            printf ("Multiplication is %d+(%di)+(%di)-(%d)", 
                    rn1*rn2, rn1*in2, rn2*in1, in1*in2);
            break;
        case 4:
            printf ("Division is (%d+%di)/(%d+%di)", 
                    rn1, in1, rn2, in2);
            break;
        default: printf ("Invalid Choice");
    }
}