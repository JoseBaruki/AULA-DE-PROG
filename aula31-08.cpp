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
    cout<<"| 2 - SUBTRA��O     |\n";
    cout<<"| 3 - MULTIPLICA��O |\n";
    cout<<"| 4 - DIVIS�O       |\n";
    cout<<"--------------------\n";
    cout<<"\n informe uma op��o \n";
    cin>>opcao;
    cout<<"Informe o valorA \n";
    cin>> valorA;
    cout<<"informe o valorB \n";
    cin>> valorB;



    switch(opcao){
    case 1:
        cout<<"Opcao escolhida soma! \n";
        resultado = valorA + valorB;
        cout<<"A soma � o "<<resultado<<" \n";

         break;
    case 2:
        cout<<"Opcao escolhida subtracao! \n";
        resultado = valorA - valorB;
        cout<<"A subtra��o � o "<<resultado<<" \n";

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
