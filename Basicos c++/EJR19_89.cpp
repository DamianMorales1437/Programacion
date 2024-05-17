#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;

float be_89 (float n1,float n2);

void factura_89(float cod,string nom,float vu,float can,float vt,float iva,float viva);

int main()
{
	float cod_89,cant_89,vpo_89,vpe_89,vc_89;
	char opc_89;
	string nom_89;
	cout<<"\nbienvenido a uis restaurant "
	<<"\npor favor digite su codigo de estudiante [2000000,2999999]:  ";
	cin>>cod_89;
	if (cod_89>2000000 && cod_89<2999999)
   {	cout<<"\n por favor digite su nombre:  ";
        cin>>nom_89;
		cout<<"    menu                valor "
		<<"\n A. pollo               $15.000"
		<<"\n B. pescado             $30.000"
		<<"\n C. carne               $20.000"
		<<"\npor favor digite su seleccion:  ";
		cin>>opc_89;
		opc_89=toupper(opc_89);
		cout<<"\nfavor digite la cantidad de platos:  ";
		cin>>cant_89;
		if (cant_89>0)
	    {
			switch (opc_89)
			{
				case'A':
					vpo_89=15000;
					factura_89(cod_89,nom_89,vpo_89,cant_89,be_89(vpo_89,cant_89),be_89(be_89(vpo_89,cant_89),0.19),be_89(be_89(vpo_89,cant_89),0.19)+be_89(vpo_89,cant_89));
				break;
				case'B':
					vpe_89=30000;
					factura_89(cod_89,nom_89,vpe_89,cant_89,be_89(vpe_89,cant_89),be_89(be_89(vpe_89,cant_89),0.19),be_89(be_89(vpe_89,cant_89),0.19)+be_89(vpe_89,cant_89));
				break;	
				case'C':
					vc_89=20000;
					factura_89(cod_89,nom_89,vc_89,cant_89,be_89(vc_89,cant_89),be_89(be_89(vc_89,cant_89),0.19),be_89(be_89(vc_89,cant_89),0.19)+be_89(vc_89,cant_89));
				break;	
				default:
					cout<<"\nlo sentimos, al parecer la opcion que digito es incorrecta,recuerde que las opciones son A,B,C por favor intentelo de nuevo";
			}
		}
		else
			cout<<"\nlo sentimos la cantidad escogida no es una posible opcion para el pedido";
	}
	else
		cout<<"\ncodigo invalido,recuerde que es su codigo de estudiante uis";
}


float be_89 (float n1,float n2)
{
float re_89;
re_89=n1*n2;
return re_89;
}
void factura_89(float cod,string nom,float vu,float can,float vt,float iva,float viva)
{
cout<<"\n***factura***"
<<"\ncodigo: "<<cod
<<"\nnombre :"<<nom
<<"\nvalor unitario :"<<vu
<<"\nnumero de pedidos :"<<can
<<"\nvalor total :"<<vt
<<"\niva total :"<<iva
<<"\nvalor con iva :"<<viva;
}
