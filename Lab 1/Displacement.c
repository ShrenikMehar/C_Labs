#include <stdio.h>
void main ()
{
    float s, u, t, a;
    printf ("Input Initial Velocity of Object: ");
    scanf ("%f", &u);
    printf ("Input Time required by Object: ");
    scanf ("%f", &t);
    printf ("Input Acceleration of Object: ");
    scanf ("%f", &a);
    s = (u * t) + 0.5 * a * t * t;
    printf ("Displacement done by Object in %.2f secs is %.2f m", t, s);
}
