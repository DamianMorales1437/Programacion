#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
	int opc_89;
	do
	{
		cout<<"\nseleccione un color"
		<<"\n[1]=azul"
		<<"\n[2]=rojo\n";
		cin>>opc_89;
	}
	while (opc_89 !=1 && opc_89!=2);
	switch (opc_89) 
	{
		case 1:
			cout<<"\nusted  selecciono el color azul";
		break;
		case 2:
			cout<<"\nusted  selecciono el color rojo";
		break;
    }
}
