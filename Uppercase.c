#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    
    char word[100];

    printf("Insert a word: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
        word[i] = toupper(word[i]);
    }

    printf("The Uppercase is: %s\n", word);

    return 0;
}