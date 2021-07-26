#include <stdio.h>
#include <string.h>

int main(){
	char fraseA[20], fraseB[20], juncao[40];
	int tamA, tamB, qnt = 0, qnt2 = 0, i;
	
	printf("Escreva uma curta frase: ");
	gets(fraseA);
	printf("Escreva outra frase que complemente a primeira: ");
	gets(fraseB);
	
	tamA = strlen(fraseA);
	tamB = strlen(fraseB);
	
	printf("\nA juncao das duas frases resulta em: ");
	strcpy(juncao, fraseA);
	strcat(juncao, " ");
	puts(strcat(juncao, fraseB));
	
	printf("\nRelatorio frase 1: ");
	printf("\nNumero de caracteres: %i", tamA);
	for(i=0;i<tamA;i++)
	{
		if(fraseA[i] == ' ')
		{
			qnt = qnt + 1;
		}
	}
	printf("\nNumero de palavras: %i", qnt+1);
	
	printf("\n\nRelatorio frase 2: ");
	printf("\nNumero de caracteres: %i", tamB);
	for(i=0;i<tamB;i++)
	{
		if(fraseB[i] == ' ')
		{
			qnt2 = qnt2 + 1;
		}
	}
	printf("\nNumero de palavras: %i", qnt2+1);	
	
	return 0;
}
