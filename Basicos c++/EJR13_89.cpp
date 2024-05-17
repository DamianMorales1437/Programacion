#include "iostream"
#include "locale.h"
using namespace std;

void informe_89(string tip,float num1,float num2,float res);

int main ()
{
float num1_89,num2_89,suma_89,resta_89,producto_89,division_89;
cout<<"\nbienvenido , este programa realiza la suma , resta , producto y division, entre dos numeros reales"
<<"\nporfavor escribir el primer numero\n";
cin>> num1_89;
cout<<"porfavor ingrese el segundo numero\n";
cin>>num2_89;
suma_89=num1_89+num2_89;
resta_89=num1_89-num2_89;
producto_89=num1_89*num2_89;
informe_89("SUMA",num1_89,num2_89,suma_89);
informe_89("RESTA",num1_89,num2_89,resta_89);
informe_89("PRODUCTO",num1_89,num2_89,producto_89);
if (num2_89==0)
   {	 
	 informe_89("DIVISION",num1_89,num2_89,0);
   }
else
	division_89=num1_89/num2_89;
	informe_89("DIVISION",num1_89,num2_89,division_89);
}


void informe_89(string tip,float num1,float num2,float res)
{
cout<< "\n***INFORME "<<tip<< "***"
<<"\nprimer numero = "<<num1
<<"\nsegundo numero= "<<num2
<<"\nRESULTADO "<<tip<<"= "<<res<<"\n";
}
