#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;

void recibo_89 (string nom,float pres,float pag1,float pag2,float sald,string msg);
float div_89 (float n1,float n2);
float rest_89 (float n1,float n2);
int main ()
{
	
char opc_89;
string nom_89;
int pres_89,consi_89,consi2_89;
cout<< "\nbienvenido a la empresa de prestamos sucursal de pagos"
<< "\npor favor digite su nombre\n";
cin>> nom_89;
cout<< "\npor favor digite el valor del prestamo (en miles)\n";
cin>> pres_89; 
    if  (pres_89>=900)
		{
		cout<< "\npor favor digite el valor del primer pago de su cuenta (en miles)\n";
		cin>> consi_89;
		if (consi_89<pres_89)
			{
			    if (consi_89<=0)
				 {
				 recibo_89(nom_89,pres_89,consi_89,0,0,"\nlo sentimos , el valor del pago no es valido por ser un valor negativo o 0");
			     }
			    else
				cout<< "\npor favor digite la opcion sobre que pago va a realizar : A=primer pago ; B=segundo pago\n";
				cin>> opc_89;
				opc_89=toupper(opc_89);
				switch (opc_89)
				{
					case'A':
						if (div_89(consi_89,pres_89)<=0.6 )
							{
							recibo_89(nom_89,pres_89,consi_89,0,rest_89(pres_89,consi_89),"\nusted no es un buen deudor");
						    }
						else
							recibo_89(nom_89,pres_89,consi_89,0,rest_89(pres_89,consi_89),"\nusted es un buen deudor");
					break;	
					case'B':
						cout<< "\npor favor digite el valor del segundo pago que va a consignar\n";
						cin >>consi2_89;
						if (consi2_89>rest_89(pres_89,consi_89)) 
							{
							recibo_89(nom_89,pres_89,consi_89,consi2_89,rest_89(pres_89,consi_89),"\nlo sentimos el valor del pago 2 no es valido por ser mayor al valor del saldo");
						    }
					    else
							recibo_89(nom_89,pres_89,consi_89,consi2_89,rest_89(rest_89(pres_89,consi_89),consi2_89),"\ngracias por sus pagos");
					break;
					default:
					cout<< "\nlo sentimos opcion no valida,recuerde que las opciones son A y B, por favor intente de nuevo"; 
				}	
			
		    }
		else
			recibo_89(nom_89,pres_89,consi_89,0,0,"\nlo sentimos el valor del pago no es valido por ser mayor al valor del prestamo");
		 
		}
	else
		cout<< "\nlo sentimos no se hacen prestamos por menos de $900 mil pesos ";

}

void recibo_89 (string nom,float pres,float pag1,float pag2,float sald,string msg)
	{
	cout<< "\nnombre:" <<nom
	<< "\nprestamo:$" <<pres
	<< "\npago 1:$" <<pag1
	<< "\npago 2:$" <<pag2
	<< "\nsaldo:$" <<sald
	<< msg;
    }

float div_89 (float n1,float n2)
	{
	float result1;
	result1=n1/n2;
	return result1;
    }

float rest_89 (float n1,float n2)
	{
	float  result2;
	result2=n1-n2;
	return result2;
    }
