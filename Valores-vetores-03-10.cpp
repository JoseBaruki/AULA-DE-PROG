#include <iostream>
#include<iomanip> // para ajustar numero de casas decimais de reais
using namespace std;
/*
	4. Faça um programa que receba 6 números.
	O programa deve:
		a) Calcular a soma de todos os números.
		b) Definir a média simples dos 6 números
		c) Quantificar quantos números são maiores
		   e quantos são menores que a média.
*/

int main()
{
	int i,n_menor=0,n_maior=0,n_igual=0;
	float valor[6], soma=0, media;
	// Definindo numero de casas decimais dos reais
	cout<<fixed<<setprecision(2); //2 casas decimais

	// Requerindo e lendo os valores
	for(i=0; i<6;i++)
	{
		cout<<"Informe o valor numero "<<i+1<<": ";
		cin>>valor[i];
	}
	// Somando os valores de um vetor
	for(i=0; i<6;i++)
	{
		soma = soma+valor[i];
	}
	//Mostrando a soma
	cout<<"a) Soma de todos os numeros: "<<soma;
	//Calculando média simples
	media = soma/6.0;
	//Mostrando a media
	cout<<"\nb) Media dos valores: "<<media;
	//Verificando quantos sao maiores e menores que a media
	for(i=0;i<6;i++)
	{
		if(valor[i]<media)
		{
			n_menor++;
		}
		else if(valor[i]>media)
		{
			n_maior++;
		}
		else
		{
			n_igual++;
		}
	}
	//Mostrando quantidade de valores menores e maiores que a media
	cout<<"\nc) Quantidade de valores:";
	cout<<"\n\t maiores que a media: "<<n_maior;
	cout<<"\n\t menores que a media: "<<n_menor;
	cout<<"\n\t iguais a media: "<<n_igual;

	return 0;
}
