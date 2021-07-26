#include <stdio.h>

int main()
{
   int matrizA[4][5], matrizB[5][2], matrizC[4][2], i, j, k;
   
   
   printf("MATRIZ A\n\n");
   for(i=0; i<4; i++)
   {
       for(j=0; j<5; j++)
       {
           printf("Digite o elemento [%i][%i] da Matriz A: ", i+1, j+1);
           scanf("%i", &matrizA[i][j]);
       }
   }
   
   printf("\nMATRIZ B\n\n");
   for(i=0; i<5; i++)
   {
       for(j=0; j<2; j++)
       {
           printf("Digite o elemento [%i][%i] da Matriz B: ", i+1, j+1);
           scanf("%i", &matrizB[i][j]);
       }
   }


   printf("\nMATRIZ C\n\n");
   
   for(i=0; i<4; i++)
   {
	   	for(j=0; j<2; j++)
	   	{	
		
			matrizC[i][j]=0;
			
	   		for(k=0; k<5; k++)
				{
				matrizC[i][j]= matrizC[i][j]+matrizA[i][k]*matrizB[k][j];
	   			}
	   			
	   		printf("%02i ", matrizC[i][j]);
		}
	printf("\n");
   }
   
   return 0;
}
