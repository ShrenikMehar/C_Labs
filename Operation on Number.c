#include <stdio.h>
#include <math.h>
void main ()
{
    int s, n, d1, d2, d3, d4, dt;
    printf ("Enter any 4 digit number: ");
    scanf ("%d", &n);
    printf ("What action do you want to perform?\n");
    printf ("Enter 1 to reverse number\nEnter 2 to ");
    printf ("calculate sum of digits\nEnter 3 to find sqrroot\n");
    scanf ("%d", &s);
    d1 = n / 1000;
    dt = n % 1000;
    d2 = dt / 100;
    dt = dt % 100;
    d3 = dt / 10;
    d4 = dt % 10;
    switch (s)
    {
        case 1: printf ("Reverse is %d%d%d%d", d4, d3, d2, d1);
                break;
        case 2: printf ("Sum is %d", d1+d2+d3+d4);
                break;
        case 3: printf ("SquareRoot is %.2f", sqrt(n));
                break;
        default: printf ("Invalid Choice");
    }
}