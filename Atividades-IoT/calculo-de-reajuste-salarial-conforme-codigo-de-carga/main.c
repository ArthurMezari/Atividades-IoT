/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


int main() {

int codigo, salario;
float reajuste1, reajuste2, reajuste3, reajuste4,  novosalario1, novosalario2, novosalario3, novosalario4;

{
	printf("Digite o código de seu cargo. De acordo com o mesmo, o seu salário sofrerá um reajuste.");
	scanf("%d", &codigo);

	printf("Digite o salário de seu cargo: ");
	scanf("%d", &salario);

	switch (codigo) {

	case 1:
		reajuste1 = salario * 0.7;
		novosalario1 = salario + reajuste1;
		printf("O seu reajuste é de: %d", reajuste1);
        printf("O seu novo salário é de: %d", novosalario1);
        printf("Você é um auxiliar de escritório!");
        break;
        
    case 2:
		reajuste2 = salario * 0.9;
		novosalario2 = salario + reajuste2;
		printf("O seu reajuste é de: %d", reajuste2);
        printf("O seu novo salário é de: %d", novosalario2);
        printf("Você é um(a) secretário(a)!");
        break;
        
    case 3:
		reajuste3 = salario * 0.5;
		novosalario3 = salario + reajuste3;
		printf("O seu reajuste é de: %d", reajuste3);
        printf("O seu novo salário é de: %d", novosalario3);
        printf("Você é um(a) cozinheiro(a)!");
        break;
        
    case 4:
		reajuste4 = salario * 0.12;
		novosalario4 = salario + reajuste4;
		printf("O seu reajuste é de: %d", reajuste4);
        printf("O seu novo salário é de: %d", novosalario4);
        printf("Você é um(a) entregador(a)!");
        break;
        
    
        
        


	}

	return 0;
}
