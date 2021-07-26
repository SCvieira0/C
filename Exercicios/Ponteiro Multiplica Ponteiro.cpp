#include <stdio.h>
#include <iostream>
using namespace std;
#define tam 5

int main() {
    
    int A, *B, **C, ***D;
    
    cout<<"O valor de A e: ";
    cin>>A;

    B = &A;
    cout<<"\nO dobro de A e: "<<(*B)*2;
    
    C = &B;
    cout<<"\nO triplo de A e: "<<(**C)*3;
    
    D = &C;
    cout<<"\nO quadruplo de A e: "<<(***D)*4;

return 0;
}
