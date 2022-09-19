#include <stdio.h>
void main ()
{
    int n, temp, r, sum;
    printf ("Enter number to check if it's Armstrong or not: ");
    scanf ("%d", &n);
    sum = 0;
    temp = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (sum == temp)
        printf ("\nIt is an Armstrong number");
    else
        printf ("\nIt is not an Armstrong number");
}
