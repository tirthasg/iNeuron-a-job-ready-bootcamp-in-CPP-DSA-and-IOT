#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter a letter: ");
    scanf("%c", &ch);

    if ('a' <= ch && ch <= 'z')
        printf("%c is in lowercase\n", ch);
    else if ('A' <= ch && ch <= 'Z')
        printf("%c is in uppercase\n", ch);
    else 
        printf("Not a letter\n");

    return 0;
}