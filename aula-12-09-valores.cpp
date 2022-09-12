#include <iostream>
using namespace std;


int main()

{
    int x, i;
    float A, y;

    cout<<"Informe o valor de A: ";
    cin>>A;
    cout<<"Informe o valor de x: ";
    cin>>x;

    y=1;
    for(i = 1; i<=x; i++)
    {
        y = y*A;
    }
        cout<<"\n"<<A<< "^" <<x<< "=" <<y;

    return 0;
}
