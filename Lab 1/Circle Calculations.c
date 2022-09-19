#include <stdio.h>
void main ()
{
    float r, a, c, pi;
    pi = 3.14159;
    printf ("Input Radius: ");
    scanf ("%f", &r);
    a = pi * r * r;
    c = 2 * pi * r;
    printf ("Area of Circle = %.2f\n", a);
    printf ("Circumference of Circle = %.2f", c);
}
