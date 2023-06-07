#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int *p = malloc(3 * sizeof(int));
    p[0] = 31;
    p[1] = 32;
    p[2] = 33;
    if (p == NULL)
    {
        return 1;
    }
    printf("%i\n", p[0]);
    free(p);
    return 0;
}  