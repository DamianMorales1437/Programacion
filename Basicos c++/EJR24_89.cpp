#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
	int ct_89,vc_89;
    cout<<"\ndesea comenzar el programa para escribir la palabra 'hola';si lo desea digite el numero 1 ";
    cin>>vc_89;
    for(ct_89=1;(vc_89==1);ct_89=ct_89+1)
   {
   cout<<"\nhola";
   cout<<"\ndesea continuar,si lo desea digite el numero 1  ";
   cin>>vc_89;
   }
   
   cout<<"\nse escribieron "<<ct_89-1<<" veces hola";
}


