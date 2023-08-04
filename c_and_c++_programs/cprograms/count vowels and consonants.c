#include <stdio.h>
int main()
{

    int vowel=0, consonant=0;
    int i;
    char ch;
    char str[13]="sammed koshti";

    printf("string = %s\n", str);
    for(i=0; str[i] != '\0'; i++)

    {
        ch = str[i];
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
           //|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')

            vowel++;

        else

            consonant++;
    }
        printf("vowels = %d\n consonants = %d", vowel, consonant);


return 0;

}
