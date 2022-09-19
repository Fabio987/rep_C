#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n1, n2, n3;
    printf ("digite a idade de uma das irmas:\n");
    scanf ("%i", &n1);
    printf ("digite a idade de uma das irmas:\n");
    scanf ("%i", &n2);
    printf ("digite a idade de uma das irmas:\n");
    scanf ("%i", &n3);


    if ( ((n1 >= n2) && (n1 <= n3)) || ((n1 >= n3) && (n1 <= n2)) )
    {
        printf (" A idade de camila  e :");
        printf ("%i", n1) ;
    }
    else
    {
        if  ( ((n2 >= n1) && (n2 <= n3)) || ((n2 >= n3) && (n2 <= n1)) )
        {
        printf (" A idade de camila  e :");
        printf ("%i", n2);
        }
        else
        {
        printf (" A idade de camila  e :");
        printf ("%i", n3);

        }

    }


    return 0;
}
