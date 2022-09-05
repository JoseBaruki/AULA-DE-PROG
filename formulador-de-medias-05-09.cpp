#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;



int main()

{
    float media, nota1, nota2;
    cout<<"Informe a nota1: \n";
    cin>>nota1;

    while (nota1 < 0)
    {
        cout<<"A nota deve ser positiva. \n Informe a nota1:";
        cin>>nota1;
    }


    cout<<"Informe a nota2: \n";
    cin>>nota2;

    while(nota2 < 0)
    {
        cout<<"A nota deve ser positiva. \n Informe a nota2:";
        cin>>nota2;
    }
        media = (nota1 + nota2)/2;
        cout<<"Sua media foi: "<<media<<" \n";

    if (media>=7)
    {
        cout<<"Voce esta aprovado!! \n";

    }
    else if ((media>=4) && (media<7 ))
    {
        cout<<"Voce esta de exame! \n";
    }
    else
    {
        cout<<"Voce esta reprovado! \n";
    }



   return 0;

}

