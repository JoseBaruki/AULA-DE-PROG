#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;



int main()

{
    float A, f_chute, f, erro;
    int contador;


    cout<<"Informe o valor de a \n";
    cin>>A;

    //atribuindo os valores iniciais

    f_chute = 7;
    erro = 1;
    contador = 0;

    while(erro>0.0001)
    {
        f = 1/(log(A+(1/f_chute)));
        f = pow(f,2);
        erro = abs(((f-f_chute)/f));
        f_chute = f;
        contador++;
    }

    cout<<" \n \t O valor de f eh:"<<f<<" ";
    cout<<" O programa rodou! : "<<contador<<" \n \t";


   return 0;

}

