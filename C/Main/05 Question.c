#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char *qs = malloc(sizeof(qs));
    printf("Did you agree whit the normative: ");
    scanf("%s", qs);
    if (strcmp(qs, "Yes")== 0)
    {
        printf("Good you agree\n");
    }
    else if (strcmp(qs, "No")== 0)
    {
        printf("Bad you not agree\n");
    }
}