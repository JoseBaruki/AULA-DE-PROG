#include <stdio.h>
#include <iostream>

using namespace std;
float ladoA, ladoB, ladoC;

int main()
{
 cout<<"Informe o valor do ladoA  \n";
 cin>>ladoA;
 cout<<"Informe o valor do ladoB \n";
 cin>>ladoB;
 cout<<"Informe o valor do ladoC \n";
 cin>>ladoC;

 if(ladoA + ladoB > ladoC && ladoB + ladoC > ladoA && ladoA + ladoC > ladoB){
 cout<<"Eh um triangulo \n";
}else{
    cout<<"Nao eh um triangulo \n";}

if(ladoA == ladoB && ladoA == ladoC){
    cout<<"Eh um equilatero \n";}

if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
    cout<<"Eh um isoceles \n";}

else{
    cout<<"Eh um escaleno \n";}

    return 0;
}
