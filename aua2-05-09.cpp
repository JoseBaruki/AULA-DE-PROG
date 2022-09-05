#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;



int main()

{
    float A, f_chute, f, erro;

    cout<<"Informe o valor de a \n";
    cin>>A;

    //atribuindo os valores iniciais

    f_chute = 7;

    erro = 1;

    while(erro>0.01)
    {
        f = 1/(log(A+(1/f_chute)));
        f = pow(f,2);
        erro = abs(((f-f_chute)/f));
        f_chute = f;
    }

    cout<<" \n \t O valor de f eh:"<<f<<" ";

   return 0;

}

