#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;
int main ()
{ 
int opc_89,ct_89,mult_89;
cout<<"que tabla de multiplicar le gustaria ver\n";
cin>>opc_89;
for (ct_89=1;ct_89<=10;ct_89=ct_89+1)
{
	mult_89=opc_89*ct_89;
	cout<<opc_89 <<" x "<<ct_89 <<" = "<<mult_89<<"\n";
}

}
