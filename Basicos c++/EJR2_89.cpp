#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{//inicio
double num1_89,num2_89,suma_89,resta_89,mult_89,divi_89;
string no_89;
cout<<"\nprograma para operar basicamete dos numero enteros"
<<"\npor favor digite el primer numero: ";
cin>>num1_89;
cout<<"\npor favor digite el segundo numero: ";
cin>>num2_89;
suma_89=num1_89+num2_89;
resta_89=num1_89-num2_89;
mult_89=num1_89*num2_89;
divi_89=num1_89/num2_89;
no_89="division por cero no valida";
cout<<"\n\n ***informe suma***"
<<"\nnumero1: "<<num1_89
<<"\nnumero2: "<<num2_89
<<"\nla suma es: "<<suma_89;
cout<<"\n\n ***informe resta***"
<<"\nnumero1: "<<num1_89
<<"\nnumero2: "<<num2_89
<<"\nla resta es: "<<resta_89;
cout<<"\n\n ***informe multiplicacion***"
<<"\nnumero1: "<<num1_89
<<"\nnumero2: "<<num2_89
<<"\nla multiplicacion es: "<<mult_89;
if (num2_89==0)
{cout<<"\n\n ***informe division***"
<<"\nnumero1: "<<num1_89
<<"\nnumero2: "<<num2_89
<<"\nla division es: "<<no_89;
}
else
cout<<"\n\n ***informe division***"
<<"\nnumero1: "<<num1_89
<<"\nnumero2: "<<num2_89
<<"\nla division es: "<<divi_89;


//fin
}
