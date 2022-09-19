#include <iostream>
using namespace std;

int main()
{
    //declarando inteiros
    int i,i_par=0,i_impar=0;

    //declarando vetor
    int num[8],par[8],impar[8];

    for(i=0; i<8; i++)
    {
        cout<<"Informe o valor do indice" <<i<<": ";
        cin>>num[i];
    }
    //conferindo dados
    for(i=0; i<8; i++)
    {
       //conferindo se eh par
        if(num[i]%2==0)
        {
            //se sim
            par[i_par]=num[i];
            i_par++;
        }
        else
        {
            //se nao - eh impar
            impar[i_impar]=num[i];
            i_impar++;


        }

    }
    cout<<"\n\nNumeros pares: \n";

    for(i=0; i<i_par; i++)
    {
        cout<<par[i]<<"\n";

    }
    cout<<" Quantidade de numeros pares: "<<i_par;


    return 0;

}
