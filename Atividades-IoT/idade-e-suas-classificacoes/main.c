/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


int main()
{
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade > 0 && idade < 13) {
        printf ("Você é criança!");
    }
    
    if (idade >= 13 && idade < 18) {
        printf ("Você é pré adolescente! ");
    }
    
    if (idade > 18 && idade < 59) {
        printf ("Você já é adulto!");
    }
    
    if (idade >= 60) {
        printf ("Você já é idoso!");
    }
    
    

    return 0;
}