#include "iomanip"
#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{float codigo_89,edad_89,exper_89;
	string nombre_89;
	char gnr_89;
	cout<< "\n preseleccion de futbol primeros niveles ";
	cout<< "\npor favor digite el codigo estudiantil (2180000-2199999)  ";
	cin>> codigo_89;
	{
	if (codigo_89>2180000 && codigo_89<2200000) 
	   {
		 cout<< "nombre: ";
		 cin>> nombre_89;
		 cout<< "edad (años): ";
		 cin>> edad_89;
		{
		 if (edad_89>=12 && edad_89<=90 )
		   {
		    cout<< "experiencia en el deporte (en años): ";
			cin>> exper_89;
			  {
			    if (exper_89>=0 && exper_89<=edad_89-6 )
			    {
					cout<< "genero : M=masculino ; F=femenino  ";
				    cin>> gnr_89;
				switch (gnr_89)
				{
				
					case'm':
					case'M':
					    	{
							 if (edad_89>=12 && edad_89<=20 && exper_89>=1.5 )
							{
							 cout<< "\n***preseleccion futbol***"
							     << "\ncodigo:"<<codigo_89
							     << "\nnombre:"<<nombre_89
							     << "\nedad:"<<edad_89
							     << "\nexperiencia:"<<exper_89
							     << "\ngenero:masculino"
							     << "\nfelicitaciones ha sido preseleccionado"
							     << "\nno nos llames nosotros te llamamos";
								 }
					    	else
					    	 cout<< "\n***preseleccion futbol***"
							     << "\ncodigo:"<<codigo_89
							     << "\nnombre:"<<nombre_89
							     << "\nedad:"<<edad_89
							     << "\nexperiencia:"<<exper_89
							     << "\ngenero:masculino"
							     << "\nlo sentimos no ha sido preseleccionado";
						   }
						break;
					case'f':
					case'F':
						{
						  if( edad_89>=12 && edad_89<=22 && exper_89>=0 )
							{
								cout<< "\n***preseleccion futbol***"
							     << "\ncodigo:"<<codigo_89
							     << "\nnombre:"<<nombre_89
							     << "\nedad:"<<edad_89
							     << "\nexperiencia:"<<exper_89
							     << "\ngenero:femenino"
							     << "\nfelicitaciones ha sido preseleccionada"
							     << "\nno nos llames nosotros te llamamos";
							}
						else
							cout<< "\n***preseleccion futbol***"
							     << "\ncodigo:"<<codigo_89
							     << "\nnombre:"<<nombre_89
							     << "\nedad:"<<edad_89
							     << "\nexperiencia:"<<exper_89
							     << "\ngenero:femenino"
							     << "\nlo sentimos no ha sido preselecciona";
						}
					break;
					 default :
						cout<< "lo sentimos,pudo haber un error al digitar la opcion,por favor intente de nuevo";
				    } 
				}
			else
				cout<< "lo sentimos la experiencia es incompatible con la edad";
			 } 
		   }
	     else 
			cout<< "\nlo sentimos no cumple con la edad necesaria";
	     }
	  }
	else
		cout<< "\nlo sentimos su nivel esta fuera del rango de preseleccion ";
   }
}
