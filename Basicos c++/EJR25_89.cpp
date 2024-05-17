#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
 int ct_89,vc_89,num1_89,num2_89,suma_89;
cout<<"\nprograma para sumar dos numero enteros \n\ndesea comenzar a sumar, si es asi digite el numero 1 ";
  cin>>vc_89;
    for(ct_89=1;(vc_89==1);ct_89=ct_89+1)
 {
int num1_89,num2_89,suma_89;
cout<<"\npor favor digite el primer numero: ";
cin>>num1_89;
cout<<"\npor favor digite el segundo numero: ";
cin>>num2_89;
suma_89=num1_89+num2_89;
cout<<"\n\n ***informe***"
<<"\nnumero1: "<<num1_89
<<"\nnumero2: "<<num2_89
<<"\nla suma es: "<<suma_89
<<"\ndesea seguir sumando, si es asi digite el numero 1 ";
cin>>vc_89;
  }
  cout<<"\n\nse realizaron " <<ct_89-1 <<" sumas";
}
