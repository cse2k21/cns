#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    char input[26], pt[26];
    printf("Enter key : ");
    for (int i = 0; i < 26; i++)
    {
        scanf("%c", &input[i]);
        for (int j = 0; j < i; j++)
        {
            if (input[i] == input[j])
            {
                printf("error : already entered key");
                exit(0);
            }
        }
    }
    printf("Enter plain text :");
    scanf("%s", pt);
    char out[26];
    for (int i = 0; pt[i] != '\0'; i++)
    {
        if (isupper(pt[i]))
            out[i] = input[pt[i] - 65];
        else
            out[i] = input[pt[i] - 97];
    }
    printf("Cipher text is : %s", out);
}
