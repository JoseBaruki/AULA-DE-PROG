#include <stdio.h>
#include <iostream>

using namespace std;
int senha;
int main()
{
    cout<<"Informe a senha: \n";
    cin>>senha;

    if (senha == 1234)
    {
        cout<<"Acesso permitido \n";
    }
    else if (senha!= 1234)
    {
        cout<<"Acesso negado \n";
    }
    return 0;
}
