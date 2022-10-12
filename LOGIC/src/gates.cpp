#include <stdio.h>

#include "../gates.h"

int AND(int A, int B)
{
    int result = A * B; 
    // printf("%d\n", result);
    return result;
};

int OR( int A, int B)
{
    int result = A | B;
    // printf("%d\n", result);
    return result;
};

int NOR(int A, int B)
{
    int result = !(A + B);
    // printf("%d\n", result);
    return result;
};

int NOT(int A)
{
    int result = !A;
    // printf("%d\n", result);
    return result;
};

int NAND(int A, int B)
{
    int result = !(A * B);
    // printf("%d\n", result);
    return result;

};

int XNOR(int A, int B)
{
    int result = !(!A * B);
    // printf("%d\n", result);
    return result;
};

int XOR(int A, int B)
{
    int result = !A * B;
    // printf("%d\n", result);
    return result;
};

