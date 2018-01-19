#include <stdio.h>
int main()
{
    char c;
    int lwc, upc;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    lwc = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
  upc = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lwc ||upc)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
