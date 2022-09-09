#include <stdio.h>

int main(void)
{
    printf("Size of char in this machine is %d byte\n", sizeof(char));
    printf("Size of int in this machine is %d bytes\n", sizeof(int));
    printf("Size of float in this machine is %d bytes\n", sizeof(float));
    printf("Size of double in this machine is %d bytes\n", sizeof(double));

    return 0;   
}