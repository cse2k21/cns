#include <stdio.h>
#include <ctype.h>

void main()
{
    char input[30];
    int key;
    printf("Enter Plain text : ");
    scanf("%s", input);
    printf("Enter the key : ");
    scanf("%d", &key);
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (isupper(input[i]))
        {
            input[i] = ((input[i] + key - 65) % 26) + 65;
        }
        else
        {
            input[i] = ((input[i] + key - 97) % 26) + 97;
        }
    }
    printf("Cipher text is : %s", input);
}
