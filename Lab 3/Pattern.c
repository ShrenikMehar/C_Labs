#include<stdio.h>
void main()
{
    int n, i, j, num, gap;
    n = 5;
    gap = n - 1;
    for (j = 1; j <= n; j++)
    {
        num = j;
        for (i = 1; i <= gap; i++)
            printf (" ");
        gap --;
        for (i = 1; i <= j; i++)
        {
            printf ("%d", num);
            num++;
        }
        num--;
        num--;
        for (i = 1; i < j; i++)
        {
            printf ("%d", num);
            num--;
        }
        printf ("\n");
    }
}
