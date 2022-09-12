#include <iostream>
using namespace std;

int main()
{
    float P, acumulador, media;
    int i, n_notas;

    cout<<"Informe o numero de notas para calcular as medias";
    cin>>n_notas;

    acumulador = 0;
    for (i=1; i<=n_notas; i++)


    {
        cout<<"Informe a nota da P"<<i<<": ";
        cin>>P;

        acumulador = acumulador + P;
    }
    media = acumulador/n_notas;
    cout<<"Media = "<<media;

    return 0;
}
