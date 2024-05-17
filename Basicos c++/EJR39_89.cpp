#include "iostream"
#include "iomanip"
using namespace std;
int a_89[2],b_89[2],rta_89[2];
void leer_89 (string msg,int vec[],int dim);
void mostrarb_89(int vec1[],int vec2[],int vec3[]); 
void sumar_89(int vec1[],int dim1,int vec2[],int dim2,int suma[]);
int main ()
{
  leer_89("A",a_89,2);
  leer_89("B",b_89,2);
  sumar_89(a_89,2,b_89,2,rta_89);
  mostrarb_89(a_89,b_89,rta_89);
  
  
}
void leer_89(string msg,int vec[],int dim)
{   int in;    
	for (in=0;in<=dim;in=in+1)
	{cout<<"\nvector "<<msg<<" por favor digite el numero ->"<<in+1<<": " ;
	 cin>>vec[in];
	}
}
void mostrarb_89(int vec1[],int vec2[],int vec3[])
{   int in;
	cout<<"\n"<<setw(10)<<"vector A"<<setw(10)<<"vector B"<<setw(10)<<"A+B";
	for(in=0;in<=2;in=in+1)
	{
	cout<<"\n"<<setw(10)<<vec1[in]<<setw(10)<<vec2[in]<<setw(10)<<vec3[in];
	}
}
void sumar_89(int vec1[],int dim1,int vec2[],int dim2,int suma[])
{   int in;   
    if (dim1=dim2)
      {for(in=0;in<=dim1;in=in+1)
       {
       	suma[in]=vec1[in]+vec2[in];
	   }
      }
    else
    cout<<"\nlo sentimos,solo se puede sumar vectores de igual dimension";
}
