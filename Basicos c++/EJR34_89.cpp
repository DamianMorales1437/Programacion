#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;

long long validar_89(long long x,string msg);

long long fac_89(long long val);

int main()
{
long long li_89,ls_89,i_89,sum_89;
li_89=validar_89(0,"el limite inferior , recuerde que debe ser mayor que cero\n");
ls_89=validar_89(li_89,"el limite superior,recuerde que dede ser mayor al limite inferior\n");
sum_89=0;
for (i_89=li_89;i_89<=ls_89;i_89=i_89+1)
	{
	sum_89=sum_89+(3+(fac_89(i_89)/i_89));
    }
cout<<"\n***informe***"
<<"\nlimite inferor: "<<li_89
<<"\nlimite superior: "<<ls_89
<<"\nsumatoria: "<<sum_89;
}

long long validar_89(long long x,string msg)
{
long long rta;
do
{
	cout<<"\npor favor digite "<<msg;
	cin>>rta;
}
while (rta<=x);
return rta;
}

long long fac_89(long long val)
{
long long f,i;
if (val>=0)
  {
   f=1;
   for (i=1 ;i<=val;i=i+1)
    {
     f=f*i;
    }
   return f;
  }
else
	cout<<"\nno es posible realizarla operacion factorial";
}
