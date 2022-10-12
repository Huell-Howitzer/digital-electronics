// C program implementing the AND gate
// through product method.
  
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, product;
  
    for (i = 0; i < 5; i++) {
  
        // using product method
        product = a[i] * b[i];
  
        printf("\n %d AND %d = %d",
               a[i], b[i], product);
    }
    printf("\n");
}