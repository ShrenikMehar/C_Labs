#include <stdio.h>
void main ()
{
    int rollno, fees, gender;
    float percentage;
    char name[16], address[64], branch[32];
    printf ("Enter Student's Details:\n\n");
    printf ("Enter Name: ");
    scanf ("%s", name);
    printf ("Enter Roll No: ");
    scanf ("%d", &rollno);
    printf ("Enter Fees Status:\nEnter 1 if paid 0 if not ");
    scanf ("%d", &fees);
    printf ("Enter Gender:\nEnter 1 if male 0 if female ");
    scanf ("%d", &gender);
    printf ("Enter Address: ");
    scanf ("%s", address);
    printf ("Enter Branch: ");
    scanf ("%s", branch);
    printf ("Enter Percentage: ");
    scanf ("%f", &percentage);
    printf ("\n\nName: %s", name);
    printf ("\nRoll No: %d", rollno);
    printf ("\nFees Status: ");
    if (fees == 1)
        printf ("Paid");
    else if (fees == 0)
        printf ("Not Paid pls pay ASAP");
    else
        printf ("Invalid response");
    printf ("\nGender: ");
    if (gender == 1)
        printf ("Male");
    else if (gender==0)
        printf ("Female");
    else
        printf ("Invalid Gender please verify it");
    printf ("\nAddress: %s", address);
    printf ("\nBranch: %s", branch);
    printf ("\nPercentage: %.2f", percentage);
}
