#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
	
    int ct_89,vc_89;
    cout<<"\ncuantas veces quiere que se escriba la palabra 'hola' ";
    cin>>vc_89;
    for(ct_89=1;ct_89<=vc_89;ct_89=ct_89+1)
   {
   cout<<"\nhola";
   }
   cout<<"\nse escribieron "<<ct_89-1<<" veces hola";
}


