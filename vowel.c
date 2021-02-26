#include<stdio.h>
main()
{
    char c;
    printf("Enter a character to check weather it is a vowel or consonant:");
    scanf("%c",&c);
    if (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
    {
        printf("The character %c is a vowel.",c);
    }
    else
        printf("The character %c is a consonant.",c);

}
