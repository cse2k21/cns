#include <stdio.h>
#include <math.h>
void main()
{
    int q, a, xa, xb, ya, yb, ka, kb;
    printf("enter values of q,a,xa,xb: ");
    scanf("%d%d%d%d", &q, &a, &xa, &xb);
    ya = pow(a, xa);
    ya = ya % q;
    printf("\nYa = %d", ya);
    yb = pow(a, xb);
    yb = yb % q;
    printf("\nYb = %d", yb);
    ka = pow(yb, xa);
    ka = ka % q;
    kb = pow(ya, xb);
    kb = kb % q;
    if (ka == kb)
        printf("\nsame");
    else
        printf("\ndifferent");
}
