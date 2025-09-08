/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


int main()
{
    float metros, centimetros, milimetros, decimetros;
   printf("Digite um valor em metros:");
   scanf("%f", &metros);
   decimetros = metros * 10;
   centimetros = metros * 100;
   milimetros = metros * 1000;
   printf("O seu valor em decímetros é: %.2f\n",decimetros);
   printf("O seu valor em centímetros é: %.2f\n",centimetros);
   printf("O seu valor em milímetros é: %.2f\n",milimetros);
   
   

    return 0;
}