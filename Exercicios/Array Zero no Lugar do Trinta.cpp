#include <stdio.h>

int main()
{
   int matriz[6][4], i, j, contador, contador2[6][4], soma;
   
   for(i=0; i<6; i++)
   {
   	for(j=0; j<4; j++)
   	{
   		printf("Digite o elemento [%i][%i], da matriz: ", i+1, j+1);
   		scanf("%i", &matriz[i][j]);
	}
   }
   
   contador = matriz[0][0];
   soma = 0;
   
   for(i=0; i<6; i++)
   {
   	for(j=0; j<4; j++)
   	{
   		if(matriz[i][j]>30)
   		{
   			contador = matriz[i][j];
   			printf(" \nO numero: %i, da matriz e maior que 30.\n", contador);
   			soma = soma+1;
		}
	}
   }
   
    printf("\nA quantidade de elementos maiores que 30 sao: %i\n", soma);
   
   contador2[i][j] = matriz[0][0];
   
    for(i=0; i<6; i++)
	{
   	for(j=0; j<4; j++)
   	{
   		if(matriz[i][j]==30)
   		{
			contador2[i][j]=0;
		}else
		{
		   	contador2[i][j] = matriz[i][j];	
		}
	}
   }
   
   printf("\n### MATRIZ 2 ###\n");
   
	for(i=0; i<6; i++)
	{
   	for(j=0; j<4; j++)
   	{
    	printf("%02i ", contador2[i][j]);
	}
	printf("\n");
	}


    return 0;
}
