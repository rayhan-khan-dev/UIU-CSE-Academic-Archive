#include <stdio.h>


int main() {

    char sentence[1000];

    int words = 0;
    int letters = 0;
    int vowels = 0;
    int consonants = 0;


    printf("Enter a sentence: ");
    fgets(sentence,1000,stdin);

    int i = 0;

    while(sentence[i] != '\0') {

        if(isalpha(sentence[i])) {

            letters++;

            char ch = tolower(sentence[i]);

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {

                vowels++;
            }
            else {
                consonants++;
            }
        }

        if(sentence[i] == ' ' && sentence[i + 1] != ' ') {
            words++;
        }

        i++;
    }

    words++;

    printf("\nWords       : %d\n", words);
    printf("Letters     : %d\n", letters);
    printf("Vowels      : %d\n", vowels);
    printf("Consonants  : %d\n", consonants);

    return 0;
}
