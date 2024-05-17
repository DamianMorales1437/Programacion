#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
	int opc_89;
	cout<<"\n\n bienvenido a uis restaurant"
	<<"\n\n           menu"
	<<"\n\n     1. trucha frita"
	<<"\n\n     2. carne de res"
	<<"\n\n     3. pollo al horno"
	<<"\n\n     4. mojarra frita"
	<<"\n\npor favor seleccione una opcion : ";
	cin>>opc_89;
	switch (opc_89)
	{case 1:
	 case 4:
		 cout<<"\n\nusted ha seleccionado pescado ";
	 break;
	 case 2:
	 	 cout<<"\n\nusted ha seleccionado carne de res";
	 break;
	 case 3:
	     cout<<"\n\nusted ha seleccionado pollo al horno";
	 break;
	 default :
	    cout<<"error de seleccion por favor intente de nuevo";	
	}
}
