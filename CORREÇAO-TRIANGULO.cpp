#include <stdio.h>
#include <iostream>

using namespace std;
float lado, ladoA, ladoB, ladoC;
int main()
{
    cout<<"Informe o valor do ladoA  \n";
    cin>>ladoA ;
    cout<<"Informe o valor do ladoB  \n";
    cin>>ladoB ;
    cout<<"Informe o valor do ladoC  \n";
    cin>>ladoC ;

    if(ladoA + ladoB > ladoC && ladoB + ladoC > ladoA && ladoA + ladoC > ladoB)
     {
      cout<<"Eh um triangulo \n";
     }
    else
    {
        cout<<"Nao eh um triangulo \n";
    }
    if (ladoA==ladoB != ladoB==ladoC != ladoA==ladoC)
    {
        cout<<"Eh um isoceles \n";
    }

    if((ladoA==ladoB) || (ladoB==ladoC) || (ladoA ==ladoC))
    {
    cout<< "Eh um equilatero \n";
    }
    else
        {
        cout<<"Eh um escaleno";
    }


return 0;

}


