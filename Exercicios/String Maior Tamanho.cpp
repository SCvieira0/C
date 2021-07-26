#include <stdio.h>
#include <string.h>

int main(){
    
    char vetorA[20], vetorB[20];
    int tamanhoA, tamanhoB, dife = 0;
    
    printf("Escreva a palavra primeira palavra: ");
    gets(vetorA);
    printf("Escreva a segunda palavra: ");
    gets(vetorB);
    
    tamanhoA = strlen(vetorA);
    tamanhoB = strlen(vetorB);
    
    if(tamanhoA>tamanhoB)
    {
    	dife = tamanhoA - tamanhoB;
    	printf("\nA palavra");
    	puts(vetorA);
    	printf(" e a maior palavra e tem %i", dife);
    	printf(" caracters a mais que a palavra ");
    	puts(vetorB);
	}else
	{
		dife = tamanhoB - tamanhoA;
		printf("\nA palavra %s", vetorB);
    	printf(" e a maior palavra e tem %i", dife);
    	printf(" caracters a mais que a palavra %s", vetorA);
	}

return 0;
}
