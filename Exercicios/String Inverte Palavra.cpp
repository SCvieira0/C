#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

	string palavra;
	int tam;
	
	cout<<"Escreva uma palavra: ";
	cin>>palavra;
	
	tam = palavra.length();
	
	for(int i = tam-1;i >= 0;i--)
	{
		cout<<palavra[i];
	}	
}
