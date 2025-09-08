/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


int main()
{
    int numero;
    
    printf("Digite aqui um número: ");
    scanf("%d", &numero);
    
    if (numero % 3 == 0) {
        printf("O seu número é divisível por três e resta zero!");
        numero +=1;
        printf("O seu novo número é: %d", numero);
    }   
        else {
        printf("O seu número não é divisível por 3.");
        numero -= 1;
        printf("O seu novo número é: %d", numero);
    }
            

    return 0;
}
