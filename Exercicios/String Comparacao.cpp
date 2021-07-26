#include <stdio.h>
#include <string.h>

int main(){
char palavra1[10], frase1[50], palavras[2][10], palavra2[10];    
char frase2[50]="Nao confie em quem nao tem foto de perfil";
int comparacao, tamanho, i;

printf("Escreva uma palavra: ");
gets(palavra1);
printf("Escreva uma frase curta:");
gets(frase1);
for(i=0; i<2; i++)
{
printf("Escreva outra palavra %i:", i+1);
gets(palavras[i]);
}


//copia das palavra 1 e 2
strcpy(palavra2, palavra1);
printf("\nA primeira palavra e: ");
puts(palavra1);
printf("E sua copia: ");
puts(palavra2);

//comparacao frase 1 e palavra2
comparacao=strcmp(frase2, frase1);

if(comparacao == 0)
{
printf("\nAs frases 1 e 2 sao iguais.\n");
}else{
    printf("\nAs frases 1 e 2 nao sao iguais.\n");
}


//tamanho vetor palavras
for(i=0; i<2; i++)
{
tamanho = strlen(palavras[i]);
printf("\nTamanho da palavra %i: %i\n ", i+1, tamanho);
}
return 0;
}
