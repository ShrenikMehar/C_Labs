#include <stdio.h>
void main ()
{
    float bmi, w, h, r;
    printf ("BMI Calculator\n\nEnter your Weight (Kg): ");
    scanf ("%f", &w);
    printf ("Enter your Height (m): ");
    scanf ("%f", &h);
    bmi = w / (h * h);
    if (bmi < 18.5)
    {
        printf ("Your BMI is %.2f\nYou are Underweight\n", bmi);
        r = 18.5 - bmi;
        printf ("You need %.2f more BMI to come in Healthy range", r);
    }
    else if (bmi >= 18.5 && bmi <=24.9)
    {
        printf ("Your BMI is %.2f\nYou are Healthy", bmi);
    }
    else if (bmi >= 25)
    {
        printf ("Your BMI is %.2f\nYou are Overweight\n", bmi);
        r = bmi - 24.9;
        printf ("You need %.2f less BMI to come in Healthy range", r);
    }
    else
    {
        printf ("You have given Invalid values BMI can't be negative");
    }
}
