#include <stdio.h>

int main() {

    char c;

    printf("Did you agree whit the normative: ");
    scanf("%c", &c);
    if (c=='y' || c=='Y')
    {
        printf("Good you agree\n");
    }
    else if (c=='n' || c=='N')
    {
        printf("Bad you not agree\n");
    }
}