#include <stdio.h> 
 

int main(){
    int i; 
    char str[100] = "dhruv";
    char ch;
    int vowels;
    int consonants;

    for (i = 0; str[i] != '\0'; i++) {
 
        ch = str[i];
 
        // If this character is a vowel,
        // increment the count of vowels
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vowels++;
 
        // If this character is a space
        // skip it
        else if (ch == ' ')
            continue;
 
        else
            // Else increment the count of consonants
            consonants++;
    }
 
    // Print the total count of vowels and consonants
    printf("\nVowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
}
 
 