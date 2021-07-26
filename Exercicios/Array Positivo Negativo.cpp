#include <stdio.h>

int main ()

{
	int i, vetor[8], vetor2[8], vetor3[8];
	int contposit = 0;
	int contnegat = 0;

	
	for(i=0; i<8; i++)
	{
	 
	printf("Informe os numeros negativos e positivs do vetor %i: ", i+1);
	scanf("%i", &vetor[i]);
	}
	
	for(i=0; i<8; i++)
	{	
		if(vetor[i]>0)
		{
			vetor2[contposit]=vetor[i];
			contposit++;
				
		}else {
			vetor3[contnegat]=vetor[i];
			contnegat++;
		}
	}
	
	printf("vetor positivo: \n");
	for(i=0; i<contposit; i++)
	{
		printf("\n%i", vetor2[i]);
	}
	
	printf("\nVetor negativo: \n");
	for(i=0; i<contnegat; i++)
	{
		printf("\n%i", vetor3[i]);
	}
	
}
