#include <stdio.h>
void main ()
{
    int n;
    printf ("Enter any 4 digit Number: ");
    scanf ("%d", &n);
    if (n >= 1000 && n <= 9999)
    {
        if (n%2 == 0)
            printf ("It is even Number");
        else
            printf ("It is odd Number");
    }
    else
    {
        if (n%2 == 0)
            printf ("It is not 4 digit but even Number");
        else
            printf ("It is not 4 digit but odd Number");
    }
}
