#include "iomanip"
#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{

	float codigo_89,edad_89,exper_89 ;
	print nombre_89 ;
	cout<< " preseleccion de futbol primeros niveles ";
	cout <<"por favor digite el codigo (2180000-2199999";
	cin>> codigo_89;
	{
	 if (codigo_89>2180000 && codigo_89<2200000 )
		cout<< "nombre:";
		cin>> nombre_89;
		cout<< "edad (años):";
		cin>> edad_89;
		{
	     if (edad_89>=12 && edad_89<=90 )
			cout<< 'experiencia en el deporte (en años):';
			cin>> exper_89;
			{
			 if ( exper_89>=0 && exper_89<=edad_89-6 )
				{
				 if (edad_89>=12 && edad_89<=20 && exper_89>=1.5 )
					cout <<'***preseleccion futbol***'
					<< 'codigo:'<<codigo_89
					<< 'nombre:'<<nombre_89
					<< 'edad:'<<edad_89
					<< 'experiencia:'<<exper_89
					<< 'felicitaciones ha sido preseleccionado'
					<< 'no nos llames nosotros te llamamos';
				else
					cout<< '***preseleccion futbol***'
					<< 'codigo:'<<codigo_89
					<< 'nombre:'<<nombre_89
					<< 'edad:'<<edad_89
					<< 'experiencia:' <<exper_89
					<< 'lo sentimos no ha sido preseleccionado';
			   }
			else 
				cout<< 'lo sentimos no tiene experiencia necesaria o es incompatible con la edad';
		    }
		else
			cout<< 'lo sentimos no cumple con la edad necesaria';
	    }
	else
		cout<< 'lo sentimos su nivel esta fuera del rango de preseleccion ';
    }
}
