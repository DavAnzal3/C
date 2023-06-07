#include <stdio.h>

void draw(int n);

int main()
{
    int height;
    printf("Height: ");
    scanf("%d", &height);
    draw(height);
    return 0;
}

void draw(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}   