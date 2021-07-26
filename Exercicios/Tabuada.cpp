#include <stdio.h>

int main (void)

{
	int resul, tabu, ini, fim;
	
	printf("Escreva um valor para a tabuada entre 1 e 10:");
	scanf("%i", &tabu);
	ini = 1;
	fim = 10;
	
	if (tabu>=1 and tabu<=10)
	
	do 
	{
		resul = tabu*ini;
		printf("%i\n", resul);
		ini = ini+1;
	
	} while (ini<=fim);
	
	else {
		printf("O valor informado esta fora das especificaçoes!");
	};
	
	return 0;
}
