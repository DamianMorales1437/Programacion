#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;

void informe_89 (string msg,float R1,float R2,float R3,float Re,float cint,float volt,float volt1,float int1,float volt2,float int2,float volt3,float int3);

float plus_89 (float n1,float n2,float n3);

float by_89 (float n1,float n2);

float betw_89 (float n1,float n2);
 
 int main()
 {
float R1_89,R2_89,R3_89,Req_89,cint_89,volt_89 ;
char tip_89;
cout<<"\ndigite el valor de R1 [ohms] :  ";
cin>>R1_89;
if (R1_89>0)
{
	cout<<"\ndigite el valor de R2[ohms] :  ";
	cin>>R2_89;
	if (R2_89>0)
	{
		cout<<"\ndigite el valor de R3[ohms] : ";
		cin>>R3_89;
		if (R3_89>0)
		{
		cout<<"\ndefinir tipo de circuito : S=serie;P=paralelo :  ";
		cin>>tip_89;
		tip_89=toupper(tip_89);
		 switch (tip_89)
		 {
			case'S':
				cout<< "\npor favor digite la corriente total [A] :  ";
				cin>>cint_89;
				Req_89=plus_89(R1_89,R2_89,R3_89);
				volt_89=by_89(cint_89,Req_89);
				informe_89("circuito serie",R1_89,R2_89,R3_89,Req_89,cint_89,volt_89,betw_89((by_89(volt_89,R1_89)),Req_89),cint_89,betw_89((by_89(volt_89,R2_89)),Req_89),cint_89,betw_89((by_89(volt_89,R3_89)),Req_89),cint_89);
			break;	
			case'P':
				cout<<"\npor favor digite el voltaje total [V] : ";
				cin>>volt_89;
				Req_89=betw_89(1,(1/R1_89)+(1/R2_89)+(1/R3_89));
				cint_89=betw_89(volt_89,Req_89);
				informe_89("circuito paralelo",R1_89,R2_89,R3_89,Req_89,cint_89,volt_89,volt_89,betw_89(by_89(cint_89,Req_89),(R1_89)),volt_89,betw_89(by_89(cint_89,Req_89),(R2_89)),volt_89,betw_89(by_89(cint_89,Req_89),(R3_89)));
			break;
			default:
				cout<<"\nlo sentimos,opcion no valida por favor intentelo de nuevo";
	     }
		}
		else
			cout<<"\nlo sentimos valor de resistencia no valido ,por favor vuelva a intentar";
	}
	else
		cout<<"\nlo sentimos valor de resistencia no valido ,por favor vuelva a intentar"; 
}
else
	cout<<"\nlo sentimos valor de resistencia no valido ,por favor vuelva a intentar"; 

 }


void informe_89 (string msg,float R1,float R2,float R3,float Re,float cint,float volt,float volt1,float int1,float volt2,float int2,float volt3,float int3)
{
cout<<msg
<<"\nItotal= "<<cint
<<"\nVtotal= "<<volt
<<"\nRtotal= "<<Re
<<"\nresistencia 1"
<<"\nvalor= "<<R1
<<"\nv1= "<<volt1
<<"\ni1= "<<int1
<<"\nresistencia 2"
<<"\nvalor= "<< R2
<<"\nv1= "<<volt2
<<"\ni1= "<< int2
<<"\nresistencia 3"
<<"\nvalor= "<< R3
<<"\nv1= "<< volt3
<<"\ni1= "<< int3;
}

float plus_89 (float n1,float n2,float n3)
{
float result1;
result1=n1+n2;
return result1;
}

float by_89 (float n1,float n2)
{
float result2;
result2=n1*n2;	
return result2;
}

float betw_89 (float n1,float n2)
{
float result3;
result3=n1/n2;
return result3;
}
