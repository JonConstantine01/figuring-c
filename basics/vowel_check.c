// Check if character is vowel or consonant
// Compare with a, e, i, o, u.

#include<stdio.h>
int main(void) {
    char vowel;
    printf("Enter a character to see if it's a vowel.\n");
    scanf("%c", &vowel);
    if (vowel == 'a' || vowel == 'A' || vowel =='e' || vowel == 'E' || vowel =='i' || vowel == 'I' || vowel =='o' || vowel == 'O' || vowel =='u' || vowel == 'U')
    {
        printf("its a vowel.\n");
    }
    else {
        printf("Its not a vowel.\n");
    }
}