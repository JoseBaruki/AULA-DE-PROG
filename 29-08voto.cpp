#include <stdio.h>
#include <iostream>

using namespace std;
int ano;
int main()
{
    cout<<"Informe o ano em que nasceu: \n";
    cin>>ano;

    if (ano>2006)
    {
        cout<<"Nao pode votar \n";
    }
    else if (ano<=2006)
    {
        cout<<"Pode votar \n";
    }
    return 0;
}
