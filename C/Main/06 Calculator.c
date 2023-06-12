
//This progra use the imput int/float of the user for print at video the rusult of a random operation that user write

#include <stdio.h>                                     //Declaration of libraries
#include <stdlib.h>                                    //Declaration of libraries
#include <ctype.h>                                     //Declaration of libraries
#include <string.h>                                    //Declaration of libraries
#include <math.h>                                      //Declaration of libraries

//Declaration function of the single opearation

float sum()                                              
{
  float add1, add2;                                    //Declaration two variables
  printf("\nYou selected sum\n");                      //Print at video a written
  printf("Insert add1: ");                             //Inserting value of variables add1
  scanf("%f", &add1);                                  //Receiving the value of add1
  printf("Insert add2: ");                             //Inserting value of variables add2
  scanf("%f", &add2);                                  //Receiving the value of add2               
  if ((int) add1 == add1 && (int) add2 == add2)        //Compare the inteher value of float for the approssimation of the value
    {                                                   
      printf("Sum it's: %.f\n", add1+add2);            //Print at video the integer result
    }
    else printf("Sum it's: %.2f\n", add1+add2);        //Print at video the float result                     
}

float subtraction()
{
  float sub1, sub2 ;
  printf("\nYou selected subtraction\n");
  printf("Insert sub1: ");
  scanf("%f", &sub1);
  printf("Insert sub2: ");
  scanf("%f", &sub2);
  if ((int) sub1 == sub1 && (int) sub2 == sub2)
    {
      printf("Subtraction it's: %.f\n", sub1-sub2);
    }
    else printf("Subtraction it's: %.2f\n", sub1-sub2);
    
}

float multiplication()
{
    float mul1, mul2;
    printf("\nYou selected multiplication\n");
    printf("Insert mul1: ");
    scanf("%f", &mul1);
    printf("Insert mul2: ");
    scanf("%f", &mul2);
    if ((int) mul1 == mul1 && (int) mul2 == mul2)
    {
      printf("Multiplication it's: %.f\n", (mul1*mul2));
    }
    else printf("Multiplication it's: %.2f\n", mul1*mul2);
}
    
float division()
{
    float div1;
    float div2;
    printf("\nYou selected division\n");
    printf("Insert div1: ");
    scanf("%f", &div1);
    printf("Insert div2: ");
    scanf("%f", &div2);
    if (div1==0 && div2==0) 
    {
      printf("Error\n");
    }
    else if (div1!=0 && div2!=0) 
    {
      if ( div1/2 == (float) div1 || div2/2 == (float) div2 || div1/div2 == 1 && div2/div2 == 1 )
      {
        printf("Divions it's: %.f\n", div1/div2);
      }
        else printf("Divions it's: %f\n", div1/div2); 
    }
    else if (div1==0 && div2!=0) 
    {
      printf("Impossible\n");
    }
    else if (div1!=0 && div2==0) {
      printf("Result it's 0\n");
    } 
}

double exponential()
{
    double exp1;
    double exp2;
    printf("\nYou selected exponentiation\n");
    printf("Insert exp1: ");
    scanf("%lf", &exp1);
    printf("Insert number of elevation: ");
    scanf("%lf", &exp2);
    if (exp1==0)
    {
      printf("Exponentatio it's 0\n");
    }
    else printf("Exponentation it's: %.lf\n", pow(exp1, exp2));
}

double radical()
{
    double rad1, rad2;
    printf("\nYou selected root extraction\n");
    printf("Insert rad1: ");
    scanf("%lf", &rad1);
    if (rad1<=0)
    {
      printf("Root extraction it's impossible\n");
    }
    else {
      float rad2 = sqrt(rad1);
      printf("Root it's: %.2lf\n", rad2);
    } 
    return 0;
}


//At this point i have compare whit Strcmp() the imput of the user whit the storage of operation that can you do

int main() 
{
  char *op = malloc(sizeof(op));
  printf("Digit your operation: ");
  scanf("%s", op);
  if (strcmp(op, "sum" ) == 0)
  {
    sum();
  }
  else if (strcmp(op, "subtraction") == 0)
  {
    subtraction();
  }
  else if (strcmp(op, "multiplication") == 0) 
  {
    multiplication();
  }
  else if (strcmp(op, "division") == 0)
  {
    division();
  }
  else if (strcmp(op, "exponential") == 0)
  {
    exponential();
  }
  else if (strcmp(op, "radical") == 0)
  {
    radical();
  }
  else printf("Invalid operation\n");
  free(op);
  return 0;
}
