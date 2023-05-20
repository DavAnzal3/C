#include <stdio.h>

int main() {
  
  /*Caratteri calcolatore*/
  int z;

  /*Condizione per il calcolatore*/

  printf("Seleziona il tipo di operazione: ");
  scanf("%i", &z);
  if (z==1)
  {
    int a, b ;
    printf("Hai scelto la somma\n");
    printf("Inserisci a: ");
    scanf("%i", &a);
    printf("Inserisci b: ");
    scanf("%i", &b);
    printf("La somma é: %i\n", a+b);
  }
  if (z==2)
  {
    int a, b ;
    printf("Hai scelto sottrazione\n");
    printf("Inserisci a: ");
    scanf("%i", &a);
    printf("Inserisci b: ");
    scanf("%i", &b);
    printf("La differenza é: %i\n", a-b);
  }
  if (z==3) 
  {
    int a, b ;
    printf("Hai scelto moltiplicazione\n");
    printf("Inserisci a: ");
    scanf("%i", &a);
    printf("Inserisci b: ");
    scanf("%i", &b);
    printf("Il prodotto é: %i\n", a*b);
  }
  if (z==4)
  {
    float a,b;
    printf("Hai scelto la divisione\n");
    printf("Inserisci a: ");
    scanf("%f", &a);
    printf("Inserisci b: ");
    scanf("%f", &b);
    if (a==0&&b==0) {
      printf("Error\n");
    }
    else if (a!=0&&b!=0) {
      printf("Il risultato è: %f\n", a/b);
    }
    else if (a==0&&b!=0) {
      printf("Impossibile\n");
    }
    else if (a!=0&&b==0) {
      printf("Il risultato è: 0\n");
    } 
  }   
}
    