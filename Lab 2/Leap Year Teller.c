#include <stdio.h>
void main ()
{
    int year;
    printf ("Enter any Year: ");
    scanf ("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0 && year % 400 != 0)
			printf ("It is not Leap Year");
		else
			printf ("It is Leap Year");
	}
	else
	{
		printf ("It is not Leap Year");
	}
}
