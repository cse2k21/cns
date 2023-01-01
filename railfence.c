#include <stdio.h>
#include <string.h>
void main()
{
    char a[25] = "Meet me in toga Party";
    int i, j = 0, k = 0, l = 0;
    char b[20], c[20];
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] != ' ')
        {
            if (j % 2 == 0)
            {
                b[k++] = a[i];
                j++;
            }
            else
            {
                c[l++] = a[i];
                j++;
            }
        }
    }
    strcat(b, c);
    printf("cipher text:%s", b);
}
