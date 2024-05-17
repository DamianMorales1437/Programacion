#include "iostream"
#include "iomanip"
using namespace std;
int a_89[4];
void leer_89(string msg,int vec[],int dim);
void sumar_89(int vec[]);
void prom_89(int vec[]);
void mostrarb_89(int vec1[]);
int main()
{
	leer_89("A",a_89,2);
	sumar_89(a_89);
	prom_89(a_89);
	mostrarb_89(a_89);
}
void leer_89(string msg,int vec[],int dim)
{   int in;    
	for (in=0;in<=dim;in=in+1)
	{cout<<"\nvector "<<msg<<" por favor digite el numero ->"<<in+1<<": " ;
	 cin>>vec[in];
	}
}
void sumar_89(int vec[])
{
vec[3]=vec[0]+vec[1]+vec[2];	
}
void prom_89(int vec[])
{
vec[4]=vec[3]/3;
}
void mostrarb_89(int vec1[])
{   int in;
	cout<<"\n"<<setw(10)<<"vector A"<<setw(30)<<"suma componentes "<<setw(30)<<"promedio";
	for(in=0;in<=2;in=in+1)
	{
	cout<<"\n"<<setw(10)<<vec1[in];
	}
	cout<<setw(30)<<vec1[3]<<setw(30)<<vec1[4];
}
