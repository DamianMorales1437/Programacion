#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;

void isuma_89(float n1,float n2);

void imulti_89(float n1,float n2);

void ius_89(int us,float cod,int qs,int qm);

int main ()
{
float cod_89,opop_89,opus_89,num1_89,num2_89;
int us_89,qs_89,sdeop_89,qm_89;
cout<<"\npara iniciar el programa digite [1]:   ";
cin>>opus_89;
us_89=1;
while (opus_89==1)
{
	cout<<"\ndigite [1] para empezar a hacer operaciones:   ";
	cin>>opop_89;
	qs_89=0;
	qm_89=0;
	while (opop_89==1)
	{
	 	cout<<"\ndigite su codigo uis [2180000-2199999]:   ";
	    cin>>cod_89;
	    if (cod_89>=2180000 && cod_89<=2199999)
	  {
		cout<<"\ndigite el primer numero:   ";
		cin>>num1_89;
		cout<<"\ndigite el segundo numero:   ";
		cin>>num2_89;
		cout<<"\npara realizar una suma digite [1];para realizar una multiplicacion digite [2]:   ";
		cin>>sdeop_89;
		switch (sdeop_89)
		{
			case 1:
				isuma_89(num1_89,num2_89);
				qs_89=qs_89+1;
			break;	
			case 2:
				imulti_89(num1_89,num2_89);
				qm_89=qm_89+1;
			break;	
			default:
				cout<<"\nlo sentimos esa no es una de las opciones ";
		}
		cout<<"\nsi desea hacer mas operaciones digite [1]:   ";
		cin>>opop_89;
      }
	  else
	    cout<<"\nlo sentimos; codigo invalido pofavor intente de nuevo\n";
	}
	ius_89(us_89,cod_89,qs_89,qm_89);
	us_89=us_89+1;
	cout<<"\npara continuar con el programa digite [1]:   ";
	cin>>opus_89;
}
cout<<"\npasaron "<<us_89-1<<" usuarios";
}

void isuma_89(float n1,float n2)
{
cout<<"\n***informe suma***"
<<"\nnumero 1= "<<n1
<<"\nnumero 2= "<<n2
<<"\nsuma= "<<n1+n2<<"\n";
}

void imulti_89(float n1,float n2)
{
cout<<"\n***informe multiplicacion***"
<< "\nnumero 1= "<<n1
<<"\nnumero 2= "<<n2
<<"\nmultiplicacion= "<<n1*n2<<"\n";
}

void ius_89(int us,float cod,int qs,int qm)
{
cout<<"\n***informe usuario "<<us<<"***"
<<"\ncodigo de usuario "<<cod
<<"\nusted ha realizado "<<qs<<" sumas y "<<qm<<" multiplicaciones\n";
}
