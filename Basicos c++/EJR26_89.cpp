#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
 int vc_89,ct_89;
 cout<<"\n informe impares ";
 ct_89=0;
 for (vc_89=5;(vc_89<=173);vc_89=vc_89+2)
 {
 	cout<<"\n"<<ct_89+1<<"=" <<vc_89 ;
	ct_89=ct_89+1; 
  } 
  
  cout<<"\nhay "<<ct_89 <<" numeros impares";
}
