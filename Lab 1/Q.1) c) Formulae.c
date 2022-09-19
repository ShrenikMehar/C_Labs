#include <stdio.h>
void main ()
{
    float m, a, f, s, d, t;
    printf ("Input Mass of Object: ");
    scanf ("%f", &m);
    printf ("Input Acceleration of Object: ");
    scanf ("%f", &a);
    f = m * a;
    printf ("Force of Object is %.2f N\n\n", f);
    printf ("Input Distance: ");
    scanf ("%f", &d);
    printf ("Input Time: ");
    scanf ("%f", &t);
    s = d / t;
    printf ("Speed is %.2f m/sec", s);
}
