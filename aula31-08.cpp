#include <stdio.h>
#include <iostream>
#include <locale.h>
using namespace std;

int opcao;
float resultado, valorA, valorB;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout<<"--------MENU--------\n";
    cout<<"| 1 - SOMA          |\n";
    cout<<"| 2 - SUBTRAÇÃO     |\n";
    cout<<"| 3 - MULTIPLICAÇÃO |\n";
    cout<<"| 4 - DIVISÃO       |\n";
    cout<<"--------------------\n";
    cout<<"\n informe uma opção \n";
    cin>>opcao;
    cout<<"Informe o valorA \n";
    cin>> valorA;
    cout<<"informe o valorB \n";
    cin>> valorB;



    switch(opcao){
    case 1:
        cout<<"Opcao escolhida soma! \n";
        resultado = valorA + valorB;
        cout<<"A soma é o "<<resultado<<" \n";

         break;
    case 2:
        cout<<"Opcao escolhida subtracao! \n";
        resultado = valorA - valorB;
        cout<<"A subtração é o "<<resultado<<" \n";

        break;
    case 3:
        cout<<"Opcao escolhida multiplicacao! \n";
        break;
    case 4:
        cout<<"Opcao escolhida divisao! \n";
        break;

    }



    return 0;

}
