#include "iostream"
#include "locale.h"
#include "iomanip"
using namespace std;


void imprecion_89(string msg1,float codigo,string nombre,char gnr,float edad,float exper,string msg2 );


int main ()
{
	float codigo_89,edad_89,exper_89 ;
	char gnr_89 ;
	string nombre_89;
	cout<< "\npreseleccion de futbol primeros niveles "
	<< "\npor favor digite el codigo estudiantil (2180000-2199999):  ";
	cin>> codigo_89;
	if (codigo_89>2180000 && codigo_89<2200000) 
	{
		cout<<"\nnombre:  ";
		cin>> nombre_89;
		cout <<"\nedad (años):  ";
		cin>> edad_89;
		if (edad_89>=12 && edad_89<=90)
		{
			cout<< "\nexperiencia en el deporte (en años):  ";
			cin>> exper_89;
			if (exper_89>=0 && exper_89<=edad_89-6)
			{
				cout<< "\ngenero : M=masculino ; F=femenino :  ";
				cin>> gnr_89;
				gnr_89=toupper(gnr_89);
				switch (gnr_89)
					{
					case 'M':
						if (edad_89>=12 && edad_89<=20 && exper_89>=1.5 )
						{
						  imprecion_89("\n***informe preceleccion futbol masculino***",codigo_89,nombre_89,gnr_89,edad_89,exper_89,"\nfelicitaciones ha sido preseleccionado");  
						}
						else
						  imprecion_89("\n***informe preceleccion futbol masculino***",codigo_89,nombre_89,gnr_89,edad_89,exper_89,"\nlo sentimos no ha sido preseleccionado");  
					break;
					case'F':
						if (edad_89>=12 && edad_89<=22 && exper_89>=0)
						{
						  imprecion_89("\n***informe preceleccion futbol femenino***",codigo_89,nombre_89,gnr_89,edad_89,exper_89,"\nfelicitaciones ha sido preseleccionada");  
					    }
						else
						  imprecion_89("\n***informe preceleccion futbol femenino***",codigo_89,nombre_89,gnr_89,edad_89,exper_89,"\nlo sentimos no ha sido preseleccionada");  
					break;	
					default:
						cout<< "\nlo sentimos,pudo haber un error al digitar la opcion,por favor intente de nuevo";
			        }	    
			}
			else
					cout<< "\nlo sentimos la experiencia es incompatible con la edad";
		}	
		else
				cout<< "\nlo sentimos no cumple con la edad necesaria";
		
	}
	else
			cout<< "\nlo sentimos su nivel esta fuera del rango de preseleccion ";
	
}


void imprecion_89(string msg1,float codigo,string nombre,char gnr,float edad,float exper,string msg2 )
	{
	cout<<msg1
	<<"\ncodigo:  "<<codigo
	<<"\nnombre: "<<nombre
	<<"\ngenero: "<<gnr
	<<"\nedad: "<<edad
	<<"\nexperiencia: "<<exper
	<< msg2;
	}

