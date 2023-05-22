#include <stdio.h>

int main() {
  
  /*Caratteri calcolatore*/
  int type;
  

  /*Condizione per il calcolatore*/

  printf("1 = Addition\n2 = Subtraction\n3 = Multiplication\n4 = Division\nSelect your operation: ");
  scanf("%i", &type);
  
  if (type==1)
  {
    int add1, add2 ;
    printf("\nYou selected sum\n");
    printf("Insert add1: ");
    scanf("%i", &add1);
    printf("Insert add2: ");
    scanf("%i", &add2);
    printf("Sum it's: %i\n", add1+add2);
  }
  
  if (type==2)
  {
    int sub1, sub2 ;
    printf("\nYou selected subtraction\n");
    printf("Insert sub1: ");
    scanf("%i", &sub1);
    printf("Insert sub2: ");
    scanf("%i", &sub2);
    printf("Subtraction it's: %i\n", sub1-sub2);
  }
  
  if (type==3) 
  {
    int mul1, mul2 ;
    printf("\nYou selected multiplication\n");
    printf("Insert mul1: ");
    scanf("%i", &mul1);
    printf("Insert mul2: ");
    scanf("%i", &mul2);
    printf("Multiplication it's: %i\n", mul1*mul2);
  }
  
  if (type==4)
  {
    float div1;
    float div2;
    printf("\nYou selected division\n");
    printf("Insert div1: ");
    scanf("%f", &div1);
    printf("Insert div2: ");
    scanf("%f", &div2);
    if (div1==0&&div2==0) {
      printf("Error\n");
    }
    else if (div1!=0&&div2!=0) {
      printf("Divions it's: %f\n", div1/div2);
    }
    else if (div1==0&&div2!=0) {
      printf("Impossible\n");
    }
    else if (div1!=0 && div2==0) {
      printf("Result it's 0\n");
    } 
  }   
}
    