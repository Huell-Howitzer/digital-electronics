// C program implementing the NOR gate
  
#include <stdio.h>
#include <stdlib.h>

int And(int A, int B)
{
    int result = A * B; 
    printf("%d\n", result);
    return result;
};

int Or(int A, int B)
{
    int result = A | B;
    printf("%d\n", result);
    return result;
};

int Nor(int A, int B)
{
    int result = !(A + B);
    printf("%d\n", result);
    return result;
};

int Not(int A)
{
    int result = !A;
    printf("%d\n", result);
    return result;
};

int Nand(int A, int B)
{
    int result = !(A * B);
    printf("%d\n", result);
    return result;

};

int XOR(int A, int B)
{
    int result = !A * B;
    printf("%d\n", result);
    return result;
};

int XNOR(int A, int B)
{
    int result = !(!A * B);
    printf("%d\n", result);
    return result;
};
  
int main(int argc, char *argv[])
{
    //int x = atoi(argv[1]);
   // int y = atoi(argv[2]);
    int x = *argv[1]-'0';
    int y = *argv[2]-'0';
    //int x = 1;
    // int y = 1;
    
    int my_nand = Nand(x, y);
    int my_or   =   Or(x, y);
    int my_not  =  Not(x);
    int my_and  =  And(x, y);
    int my_xor  = XOR(x, y);
    int my_xnor = XNOR(x, y);
    
    return 0;
}