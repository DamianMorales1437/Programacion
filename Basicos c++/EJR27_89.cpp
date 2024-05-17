#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
 int vc_89,ct_89;
 cout<<"\n informe impares ";
 ct_89=0;
 vc_89=5;
 while (vc_89<=173)
  {
  	cout<<"\n"<<ct_89+1<<"=" <<vc_89 ;
	ct_89=ct_89+1; 
	vc_89=vc_89+2;}
	cout<<"\nse escribieron "<<ct_89<<" impares";
  }
