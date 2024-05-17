#include <iostream>
#include <locale.h>
using namespace std;
void impresion(int numer,char msg[]);

int main()
{

int num1_89;
cout<<"programa para determinar si un numero entero es par o impar";
cout<<"\ningrese un numero entero\n";
cin>>num1_89;
	if (num1_89%2==0)
	{
		if (num1_89>0)
		{
			impresion(num1_89,"numero par positivo");
		}
		else
		{
			impresion(num1_89,"numero par negativo");
	    }
    }
    else
    {
		if (num1_89>0)
		{
			impresion(num1_89,"numero impar positivo");
	    }
		else
		{
			impresion(num1_89,"numero impar negativo");
		}
    }
    system("pause");
}


void impresion(int numer,char msg[])
{
    cout<<"\n***informe del numero entero***";
	cout<<"\nnumero:"<<numer<<endl;
	cout<<msg<<endl;
}
