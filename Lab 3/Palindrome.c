#include <stdio.h>
#include <string.h>
void main ()
{
    char s[16];  
    int i, n, c;
    c = 0;
    printf ("Enter the string : ");
    scanf ("%s", s);
    n = strlen (s);
    for (i = 0; i < n / 2; i++)  
    {
    	if (s[i] == s[n - i - 1])
    	c++;
    }
    if(c == i)
        printf ("string is palindrome");
    else
        printf ("string is not palindrome");
}
