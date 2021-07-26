#include <stdio.h>
#include <math.h>

int main ()

{
	int i, vetor[9], d, limite, verifica;
	
	verifica=1;
	
	for(i=0; i<9; i++)
	{
	printf("Digite o elemento %i:", i+1);
	scanf("%i", &vetor[i]);

	}


	
	for(i=0; i<9; i++)
	{
			
		if(vetor[i]>1) 
		{
			d=2;
			verifica=1;
			limite = sqrt(vetor[i]);
			
			while(verifica && d <= limite)
			{
				if(vetor[i]%d==0)
				{
					verifica = 0;
				}
				
				d++;
			}
			
			if (verifica)
			
			{
			printf("O numero %d, na posicao: vetor[%d] e primo.\n", vetor[i],i);
			};
		}
	}
	
	return 0;
}
