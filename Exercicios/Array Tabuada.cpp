#include <stdio.h>

int main ()

{
	int i, ini, tabu, vetor[10];
	 
	printf("Informe a tabuada desejada:");
	scanf("%i", &tabu);
	ini=1;
			
	for(i=0; i<10; i++)
	{	
	while(i<10 && ini<=10)
	{
		vetor[i] = tabu*ini;	
		printf("Os resultados da tabuada sao %i: %i\n", i+1, vetor[i]);
		i++;
		ini++;
	}
	}
	
	return 0;
	
}

