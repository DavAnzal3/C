#include <stdio.h>

int main() {
  
  /*Variables*/
  int type;
  long double ans;
  

  /*Condition calculator*/

  printf("1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\nSelect your operation: ");
  scanf("%i", &type);
  
  if (type==1)
  {
    int add1, add2 ;
    char a;

    printf("\nYou selected sum\n");
    printf("Insert add1: ");
    scanf("%i", &add1);
    printf("Insert add2 ");
    scanf("%i", &add2);
    printf("Sum it's: %i\n", add1+add2);
    printf("Vuoi continuare con la somma: \n");
    scanf("%c", &a);
    
    if (a == 'y') 
    {
        printf("Sei stato bravo");
    }
  
  }
}