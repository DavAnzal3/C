#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    printf("Nome:");
    scanf("%s", name);
    printf("%li\n", strlen(name));
}