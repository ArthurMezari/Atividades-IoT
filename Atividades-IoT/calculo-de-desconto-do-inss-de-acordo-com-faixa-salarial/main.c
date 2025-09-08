/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



int main()
{
    float salario, desconto, desconto1, desconto2;
    
    printf("Digite o seu salário:");
    scanf("%f", &salario);
    
    if (salario <= 600) {
        printf("Você está isento do INSS!");
    }
    
    if (salario > 600 && salario <= 1200) {
        desconto = salario * 0.20;
        printf("É descontado de seu salário uma quantia de: %.2f", desconto);
    }
    
    if (salario > 1200 && salario <= 2000) {
        desconto1 = salario * 0.25;
        printf("É descontado de seu salário uma quantia de: %.2f", desconto1);
    }
    
    if (salario > 2000) {
        desconto2 = salario * 0.30;
        printf("É descontado de seu salário uma quantia de: %.2f", desconto2);
    }
    
    

    return 0;
}
