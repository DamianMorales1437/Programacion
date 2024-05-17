#include "iomanip"
#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
	char opc_89;
	cout<<"\n\n bienvenido a uis restaurant"
	<<"\n\n           menu"
	<<"\n\n     A. trucha frita"
	<<"\n\n     B. carne de res"
	<<"\n\n     C. pollo al horno"
	<<"\n\n     D. mojarra frita"
	<<"\n\npor favor seleccione una opcion : ";
	cin>>opc_89;
	opc_89=toupper(opc_89);
	switch (opc_89)
	{case 'A':
	 case 'D':
		 cout<<"\n\nusted ha seleccionado pescado ";
	 break;
	 case 'B':
	 	 cout<<"\n\nusted ha seleccionado carne de res";
	 break;
	 case 'C':
	     cout<<"\n\nusted ha seleccionado pollo al horno";
	 break;
	 default :
	    cout<<"error de seleccion por favor intente de nuevo";	
	}
}
