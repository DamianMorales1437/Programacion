#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;
char validar1( );
long long validar (long long li,long long ls,string msg);
int main ()
{
long long us_89,bandera_89,estrato_89,edad_89,codigo_89;
char genero_89;
string nombre_89;
cout<<"\npor favor digite 1 para empezar\n";
us_89=0;
cin>>bandera_89;
while (bandera_89==1 )
	{
	us_89=us_89+1;
	cout<<"\npor favor digite su nombre\n";
	cin>>nombre_89;
	codigo_89=validar(300,800,"su codigo [300-850]");
	cout<<"\nsu codigo es "<<codigo_89;
	edad_89=validar(2,8,"la edad del chaval [2-8] en años");
	cout<<"\nla edad del chaval es "<<edad_89<<" años";
	estrato_89=validar(1,4,"su estrato [1-4]:");
	cout<<"su estrato es "<<estrato_89;
	genero_89=validar1();
	switch (genero_89)
		{
		case'M':
			cout<<nombre_89<<" su genero es masculino";
		break;
		case'F':
			cout<<nombre_89<<" su genero es femenino";
		break;	
		case'I':
			cout<<nombre_89<<" su genero es indefinido";
	   }
	cout<<"\ndigite 1 para continuar con el programa\n";
	cin>>bandera_89;
	}
cout<<"\nla cantidad de usuarios es de "<<us_89;
}

char validar1( )
{
char gen;
do
{
cout<<"\ndigite su genero ;M=masculino;F=femenino;I=indefinido\n";
cin>>gen;
gen=toupper(gen);
}
while (gen!='M' && gen!='F' && gen!='I');
return gen;
}

long long validar (long long li,long long ls,string msg)
{
long long x;
do
{
cout<<"\npor favor digite "<<msg;
cin>>x;
}
while (x>ls or x<li);
return x;
}
