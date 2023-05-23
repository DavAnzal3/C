#include <stdio.h>


void meow(int n);   /*no input (void)*/

int main() {

    meow(3);
   

}

void meow(int n) {
    
    for (int i =0; i < n; i++)
    {
        printf("Meow\n");
    }
    
}