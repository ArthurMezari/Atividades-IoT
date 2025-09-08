/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define PI 3.14

int main()
{
    float raio, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    area = PI * raio * raio;
    printf("area: %.2f", area);
    

    return 0;
}
