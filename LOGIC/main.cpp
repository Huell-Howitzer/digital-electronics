
#include "gates.h"

#include <stdio.h>

void generate_truth_table()
{
    int i = 0;
    int j = 0;
    int truth_and = AND(i, j);
    // printf("| INPUT ||        |\n");
    // printf("|-------|| OUTPUT |\n");
    // printf("| A | B ||--------|\n");
    
    for(int i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("| %d | AND | %d | = | %d |\n", i, j, AND(i, j));
        }
    }
}

int main(int argc, char *argv[])
{
    int x = *argv[1]-'0';
    int y = *argv[2]-'0';
    
    int my_and  = AND(x, y);
    int my_nand = NAND(x, y);
    int my_nor  = NOR(x, y);
    int my_or   = OR(x, y);
    int my_xor  = XOR(x, y);
    int my_xnor = XNOR(x, y);
    int my_not  = NOT(x);
    int my_not1 = NOT(y);
    
   
   printf("%d AND %d = %d\n", x, y, my_and);
   
   printf("%d NAND %d = %d\n", x, y, my_nand);
   
   printf("%d NOR %d = %d\n", x, y, my_nor);
   
   printf("%d OR %d = %d\n", x, y, my_or);
   
   printf("%d XOR %d = %d\n", x, y, my_xor);
   
   printf("%d XNOR %d = %d\n", x, y, my_xnor);
   
   printf("NOT %d = %d\n", x, my_not);
   
   printf("NOT %d = %d\n", y, my_not1);
   
   generate_truth_table();
   
    
    return 0;
}