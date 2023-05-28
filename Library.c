#include <stdio.h>
#include <string.h>


typedef struct
    {
        string numbers;
        string name;
    }
    person;

int main()
{

    person people[2];

    people[0].name = "Lucy";
    people[0].numbers = "223-567-3456";

    people[1].name = "Carter";
    people[1].numbers = "456-789-211";

    
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "Lucy") == 0 )
        {
            printf("Found %s\n", people[i].numbers);
            return 0;
        }
        
    }
    printf("Not found");
    return 1;
    


}