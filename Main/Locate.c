#include <stdio.h>

int main()
{
    int numbers[] = {1,2,3,4,5,6,7};
    for (int i = 0; i < 3; i++)
    {
        if (numbers[i] == 2)
        {
            printf("Found\n");
            return 0;
        }
        
    }
    printf("Not found");
    return 1;


}  