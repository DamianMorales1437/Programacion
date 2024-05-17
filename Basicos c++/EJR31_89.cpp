#include "iostream"
#include "locale.h"
using namespace std;

int validar_89(int op);

int main ()
{
	int opc_89;
		cout<<"\nseleccione un color"
		<<"\n[1]=azul"
		<<"\n[2]=rojo\n";
		cin>>opc_89;
	opc_89=validar_89(opc_89);
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

int validar_89(int op)
{
int ret_89;
do
cin>>op;
while (op!=1 && op!=2);
ret_89=op;
return ret_89;
}
