#include <iostream>
#include <stdio.h>


using namespace std;

int main()


{
     cout<<"Informe a tabuada que deseja calcular : \n";

    int n = 0;
    cin>>n;

    for (int i=1; i<=10; i++){
    cout << i << " x " << n << " = " << i * n<< "\n";


    }

return 0;


}
