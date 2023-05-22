#include <stdio.h>
#include <math.h>

int main() {
  
  /*Caratteri calcolatore*/
  char c;
  

  /*Condizione per il calcolatore*/

  printf("Select your operation: ");
  scanf("%c", &c);
  
  if (c=='a'||c=='A')
  {
    int add1, add2 ;
    printf("\nYou selected sum\n");
    printf("Insert add1: ");
    scanf("%i", &add1);
    printf("Insert add2: ");
    scanf("%i", &add2);
    printf("Sum it's: %i\n", add1+add2);
  }
  
  if (c=='s'||c=='S')
  {
    int sub1, sub2 ;
    printf("\nYou selected subtraction\n");
    printf("Insert sub1: ");
    scanf("%i", &sub1);
    printf("Insert sub2: ");
    scanf("%i", &sub2);
    printf("Subtraction it's: %i\n", sub1-sub2);
  }
  
  if (c=='m'||c=='M') 
  {
    int mul1, mul2 ;
    printf("\nYou selected multiplication\n");
    printf("Insert mul1: ");
    scanf("%i", &mul1);
    printf("Insert mul2: ");
    scanf("%i", &mul2);
    printf("Multiplication it's: %i\n", mul1*mul2);
  }
  
  if (c=='d'||c=='D')
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
  if (c=='e'||c=='E')
  {
    int exp1;
    printf("\nYou selected exponentiation\n");
    printf("Insert exp1: ");
    scanf("%i", &exp1);
    if (exp1==0)
    {
      printf("Exponentatio it's 0\n");
    }
    else printf("Exponentation it's: %i\n", exp1*exp1);
  }
  if (c=='r'||c=='R')
  {
    float rad1;
    float rad2 = sqrt(rad1);
    
    printf("\nYou selected root extraction\n");
    printf("Insert rad1: ");
    scanf("%f", &rad1);
    if (rad1<=0)
    {
      printf("Root extraction it's impossible\n");
    }
    else printf("Root it's: %f\n", rad2);
  }
  
  
}
         