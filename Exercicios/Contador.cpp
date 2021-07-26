#include <stdio.h>

int main(void)

{
	int N, contador;
	
	printf("Escreva um numero:");
	scanf("%i", &N);
	
	contador = 1;
	
	if (N==0)
	{
		printf("Não é possivel fazer a senquencia a partir do zero!");
	}
 	
	else {
	do 
	{
		printf("%i\n", contador);
		contador = contador+1;		
	} while (contador<=N);
		};
	
	return 0;
	
}
