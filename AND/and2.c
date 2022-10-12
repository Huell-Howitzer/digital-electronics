// C program implementing the AND gate
// using if and else condition
  
#include <stdio.h>
#include <stdlib.h>
  
int main()
{
    int a[5] = { 1, 0, 1, 0, 1 };
    int b[5] = { 0, 1, 1, 0, 0 };
    int i, ans;
  
    for (i = 0; i < 5; i++) {
        if (a[i] == 0 && b[i] == 0)
            ans = 0;
  
        else if (a[i] == 0 && b[i] == 1)
            ans = 0;
  
        else if (a[i] == 1 && b[i] == 0)
            ans = 0;
        else
            ans = 1;
  
        printf("\n %d AND %d = %d",
               a[i], b[i], ans);
    }
     printf("\n");
}