#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    char *word = malloc(sizeof(word));

    printf("Insert a word: ");
    scanf("%s", word);

    for (int i = 0; i < strlen(word); i++) {
        word[i] = toupper(word[i]);
    }

    printf("The Uppercase is: %s\n", word);
    free(word);
    return 0;
}