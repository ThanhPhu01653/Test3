#include <stdio.h>

int main ()
{
    int m,n,times=0;
    scanf ("%d %d",&m,&n);
    if (m%2==1||n%2==1)
    {
        if (m%2==1&&n%2==1)
        {
            if (m>n)
            {
                times=3+(n-1)*2;
            }
            else
            {
                times=3+(m-1)*2;
            }
        }
        else if (m%2==1)
        {
            times=3+(m-1)*2;
        }
        else
        {
            times=3+(n-1)*2;
        }
        printf ("YES  %d",times);
    }
    else 
    {
        printf ("NO");
    }
}