#include <iostream>
#include <locale.h>
using namespace std;

float suma(float n1,float n2);
float resta(float n1,float n2);
float multiplicacion(float n1,float n2);
float division(float n1,float n2);
void impresion(char msg[],float numer1,float numer2,float rta);

int main()
{
float sumar_89,num1_89,num2_89,restar_89,multiplicar_89,dividir_89;
cout<<"\nprograma para sumar,restar,multiplicar,divir dos numeros\n";
cout<<"\npor favor digite el primer numero\n";
cin>>num1_89;
cout<<"\npor favor digite el segundo numero\n";
cin>>num2_89;
	sumar_89=suma(num1_89,num2_89);
	restar_89=resta(num1_89,num2_89);
	multiplicar_89=multiplicacion(num1_89,num2_89);
	dividir_89=division(num1_89,num2_89);
	if (num2_89!=0)
	{
		impresion("division",num1_89,num2_89,dividir_89);
	}
	else
	{
		cout<<"\nno se puede hacer division por cero\n";
    }


	impresion("suma",num1_89,num2_89,sumar_89);
	impresion("resta",num1_89,num2_89,restar_89);
	impresion("multiplicacion",num1_89,num2_89,multiplicar_89);

system("pause");
}//fin


float division(float n1,float n2)
{float divi;
	divi=n1/n2;
	return divi;
}


float multiplicacion(float n1,float n2)
{float multi;
	multi=n1*n2;
	return multi;
}

float resta(float n1,float n2)
{ float resta;
	resta=n1-n2;
	return resta;
}

float suma(float n1,float n2)
{float suma;
	suma=n1+n2;
	return suma;
}

void impresion(char msg[],float numer1,float numer2,float rta)
{
	cout<<"\n***informe "<<msg<<"***";
	cout<<"\nnumero 1: "<<numer1;
	cout<<"\nnumero 2: "<<numer2;
	cout<<"\nresultado de "<<msg<<":"<<rta<<endl;
}


