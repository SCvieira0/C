#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    
    int *pint;
    float real = 2.5, *preal;
    char ch = 'Z', *pchar;
    int inteiro = 10;
    
    pint = &inteiro;
    pchar = &ch;
    preal = &real;
    
    cout<<"Valores antes: \n";
    cout<<*pint;
    cout<<"\n";
    cout<<*pchar;
    cout<<"\n";
    cout<<*preal;
    cout<<"\n";
    
    *pchar = 'A';
    *pint -= 5;
    *preal += 2.5;
    
    cout<<"Valores depois: \n";
    cout<<*pint;
    cout<<"\n";
    cout<<*pchar;
    cout<<"\n";
    cout<<*preal;
    cout<<"\n";


return 0;
}
