// C program implementing the AND gate
// using & operator
  
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, and_ans;
  
    for (i = 0; i < 5; i++) {
  
        // using the & operator
        and_ans = a[i] & b[i];
  
        printf("\n %d AND %d = %d",
               a[i], b[i], and_ans);
    }
    printf("\n");
}