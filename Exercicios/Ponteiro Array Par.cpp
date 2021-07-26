#include <stdio.h>
#include <iostream>
using namespace std;
#define tam 5

int main() {
    
    int array[tam];
    int *ponteiro = array;
    
    for(int i=0;i<tam;++i) 
    {
        cout<<"Informe o valor "<<i+1<<": ";
        cin>>array[i];
    }

    for(int i=0;i<tam;i++)
    {
        if(array[i]%2==0)
        {
            cout<<"\nO valor "<<array[i]<<" e par.\n";
            cout<<"E tem por endereco: \n";
            cout<<ponteiro<<"\n";
        }
        ponteiro++;
    }

    

return 0;
}
