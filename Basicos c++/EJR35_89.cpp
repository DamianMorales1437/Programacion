#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;

void informe_89 (long long cod,char estra,long long cped,long long cder,long long vt);

int main ()
{
long long cod_89,si_89,si2_89,opc_89,VDA_89,VDB_89,VPA_89,VPB_89,ctc_89,cpeda_89,cpedat_89,cdera_89,cderat_89,cpedb_89,cpedbt_89,cderb_89,cderbt_89,vpeda_89,vdera_89,vpedb_89,vderb_89;
char estra_89;
VDA_89=15000;
VDB_89=30000;
VPA_89=10000;
VPB_89=25000;
ctc_89=0;
cpedat_89=0;
cderat_89=0;
cpedbt_89=0;
cderbt_89=0;
while (ctc_89<10)
{
	cout<<"\nbienvenido al portal de citas"
	<<"\nsi desea pedir cita(s) digite 1:   ";
	cin>>si_89;
	while (si_89==1 && ctc_89<10)
	{
		do
		{
			cout<<"\npor favor digite su codigo de usuario [400-800]:   ";
			cin>>cod_89;
		}
		while (cod_89<400 or cod_89>800);
		do
		{
			cout<<"\npor favor digite su estrato [A o B]:   ";
			cin>>estra_89;
			estra_89=toupper(estra_89);
	    }
		while (estra_89!='A' && estra_89!='B');
		switch (estra_89)
		{
			case'A':
				cpeda_89=0;
				cdera_89=0;
				vpeda_89=0;
				vdera_89=0;
				si2_89=0;
				while (si2_89==0 && ctc_89<10)
				{
					cout<<"\npor favor digite que tipo de cita desea"
					<<"\n1:pediatria=$10000 ; 2:dermatologia=$15000    ";
					cin>>opc_89;
					switch (opc_89)
					{
						case 1:
							cpedat_89=cpedat_89+1;
							cpeda_89=cpeda_89+1;
							vpeda_89=VPA_89*cpeda_89;
						break;	
						case 2:
							cderat_89=cderat_89+1;
							cdera_89=cdera_89+1;
							vdera_89=VDA_89*cdera_89;
						break;
						default:
							cout<<"\nopcion herrada,por favor vuelva a escoger";
					}
					cout<<"\nsi desea pedir otra cita digite 0:   ";
					cin>>si2_89;
					ctc_89=cpedat_89+cderat_89+cpedbt_89+cderbt_89;
					cout<<"\nrecuerde que solo aceptamos 10 citas por dia,van "<<ctc_89<<" citas";
				}
				informe_89(cod_89,estra_89,cpeda_89,cdera_89,vpeda_89+vdera_89);
		    break;
			case'B':
				cpedb_89=0;
				cderb_89=0;
				vpedb_89=0;
				vderb_89=0;
				si2_89=0;
				while (si2_89==0 && ctc_89<10)
				{
					cout<<"\npor favor digite que tipo de cita desea"
					<<"\n1:pediatria=$25000 ; 2:dermatologia=$30000   ";
					cin>>opc_89;
					switch  (opc_89)
					{
						case 1:
							cpedbt_89=cpedbt_89+1;
							cpedb_89=cpedb_89+1;
							vpedb_89=VPB_89*cpedb_89;
						break;
						case 2:
							cderbt_89=cderbt_89+1;
							cderb_89=cderb_89+1;
							vderb_89=VDB_89*cderb_89;
						break;
						default:
							cout<<"\nopcion herrada,por favor vuelva a escoger";
					}
					cout<<"\nsi desea pedir otra cita digite 0";
					cin>>si2_89;
					ctc_89=cpedat_89+cderat_89+cpedbt_89+cderbt_89;
					cout<<"\nrecuerde que solo aceptamos 10 citas por dia,van "<<ctc_89<<" citas";
				}
				informe_89(cod_89,estra_89,cpedb_89,cderb_89,vpedb_89+vderb_89);
		}
		cout<<"si desea cambiar de usuario digite 1 sino digite otro numero:   ";
		cin>>si_89;
	}
	cout<<"\ngracias por tenernos en cuenta,recuerde que el maximo de citas permitido es 10 vamos en "<<ctc_89<<" citas";
}
cout<<"\nvalor total recolectado por dermatologia:$"<<(cderat_89*VDA_89)+(cderbt_89*VDB_89) 
<<"\ncantidad de citas programadas para pediatria en el dia:"<<(cpedat_89+cpedbt_89)
<<"\npromedio de dinero recolectado por estrato A al dia :$"<<(cpedat_89*VPA_89)+(cderat_89*VDA_89);
}

void informe_89 (long long  cod,char estra,long long cped,long long cder,long long vt)
{
cout<<"\ncodigo="<<cod
<<"\nestrato="<<estra
<<"\ncantidad de pediatrias="<<cped
<<"\ncantidad de dermatologias="<<cder
<<"\nvalor por pago de consultas="<<vt;
}
