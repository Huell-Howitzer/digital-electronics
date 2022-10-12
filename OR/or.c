// C program implementing the OR gate
// using + operator
  
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, or_ans;
  
    for (i = 0; i < 5; i++) {
  
        // using the + operator
        if (a[i] + b[i] > 0)
            or_ans = 1;
        else
            or_ans = 0;
  
        printf("\n %d AND %d = %d",
               a[i], b[i], or_ans);
    }
}