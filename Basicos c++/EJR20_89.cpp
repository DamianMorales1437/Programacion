#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;

float SUMA_89(float n1,float n2,float n3);
float DIVISION_89 (float n1);
void INFORME_89(string nom,float n1,float n2,float n3,float prom,string msg);
int main ()
{
	char opc_89;
	string nom_89;
	float not1_89,not2_89,not3_89,prom_89,K1,K2,K3;
	K1=0.2;
	K2=0.3;
	K3=0.5;
	cout<< "\nprograma para promediar sus notas de clase"
	<<"\npor favor digite su nombre \n";
	cin>> nom_89;
	cout<< "\npor favor digite sus notas (rango [0.0]-[5.0])"
	<<"\nnota 1: ";
	cin>> not1_89;
	cout<< "\nnota 2: ";
	cin>> not2_89;
	cout<< "\nnota 3: ";
	cin>> not3_89;
	if (not1_89<0.0 or not1_89>5.0 or not2_89<0.0 or not2_89>5.0 or not3_89<0.0 or not3_89>5.0)
   {
	 
	 INFORME_89(nom_89,not1_89,not2_89,not3_89,0,"\nLa nota no es válida por no estar en el rango [0.0-5.0]");
   }
     
    else
	 {
	    cout<< "\npara realizar el promedio con iguales pesos digite la letra A"
		<< "\npara realizar el promedio con pesos ponderados digite la letra B ;;EL PONDERADO DE LAS NOTAS ES: 1=20%   2=30%  3=50% \n";
		cin>> opc_89;
		opc_89=toupper(opc_89);
	    switch  (opc_89)
		{
			case'A':
				prom_89=DIVISION_89(not1_89+not2_89+not3_89);
				if (prom_89>=3.0)
				{
				    INFORME_89(nom_89,not1_89,not2_89,not3_89,prom_89,"\nusted aprobo la asignatura");
			    }
				else
					INFORME_89(nom_89,not1_89,not2_89,not3_89,prom_89,"\nusted reprobo la asignatura");
			break;
			case'B':
				prom_89=SUMA_89(not1_89*K1,not2_89*K2,not3_89*K3);
				if (prom_89>=3.0)
				 {
					if (not3_89>=4.5) 
						{
						INFORME_89(nom_89,not1_89,not2_89,not3_89,prom_89,"\nusted aprobo la asignatura,gracias a la nota 3");
					    }
				    else
						INFORME_89(nom_89,not1_89,not2_89,not3_89,prom_89,"\nusted aprobo la asignatura");
				 }
				else
					INFORME_89(nom_89,not1_89,not2_89,not3_89,prom_89,"\nusted reprobo la asignatura");
			break;	
			default:
				cout<< "\nla opcion es incorrecta , por favor vuelva a intentarlo y recuerde que las opciones son A o B";
	    }
	  }
}
  

	
float SUMA_89 (float n1,float n2,float n3)
{
float sum;
sum=n1+n2+n3;
return sum;
}

float DIVISION_89 (float n1)
{
float div;
div=n1/3;
return div;
}

void INFORME_89(string nom,float n1,float n2,float n3,float prom,string msg)
{
cout<< "\n***informe notas***"
<< "\nnombre: " <<nom 
<< "\nnota 1: " <<n1
<< "\nnota 2: " <<n2
<< "\nnota 3: " <<n3
<< "\npromedio :" <<prom
<< msg;
}




