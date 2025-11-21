
//Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n')
            count[(int)str1[i]]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n')
            count[(int)str2[i]]--;
    }
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings are anagrams!\n");

    return 0;
}

//Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } 
        else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }

        i++;
    }
    word[j] = '\0';
    if (j > maxLen) {
        strcpy(longest, word);
    }

    printf("Longest word: %s\n", longest);

    return 0;
}

