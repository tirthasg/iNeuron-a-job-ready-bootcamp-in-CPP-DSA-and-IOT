#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if ('a' <= ch && ch <= 'z')
        printf("%c is a lowercase character\n", ch);
    else if ('A' <= ch && ch <= 'Z')
        printf("%c is a uppercase character\n", ch);
    else if ('0' <= ch && ch <= '9')
        printf("%c is a digit\n", ch);
    else 
        printf("%c is a special character\n", ch);

    return 0;
}