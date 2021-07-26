#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    
    float vetor[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float *p;
    p=vetor;
    
    for(int i=0;i<10;i++)
    {
        cout<<"A posicao "<<*p<<" do vetor apresenta o endereco: \n";
        cout<<p;
        cout<<"\n";
        p++;
    }

return 0;
}
