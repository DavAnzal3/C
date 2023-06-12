#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *array = malloc(sizeof(array));
    printf("Insert n: ");
    scanf("%i", &array[0]);
    printf("Insert n1: ");
    scanf("%i", &array[1]);
    printf("Insert n2: ");
    scanf("%i", &array[2]);    
    
    char *op = malloc(sizeof(op));
    printf("Insert position: ");
    scanf("%s", op);   
    if (strcmp(op, "first")== 0)
    {
        printf("%i\n", array[0] );
    }
    else if(strcmp(op, "second")== 0)
    {
        printf("%i\n", array[1]);
    }
    else if(strcmp(op, "third")== 0)
    {
        printf("%i\n", array[2]);
    }
    free(op);
    free(array);
    return 0;
}