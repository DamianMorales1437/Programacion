#include "iostream"
#include "iomanip"
using namespace std; 
int a_89[2],b_89[2];
void leer_89 (string msg,int vec[]);
void mostrarh_89(string msg,int vec[]);
void mostrarv_89(string msg,int vec[]);
void mostrarb_89(int vec1[],int vec2[]);
int main ()
{
 leer_89("A",a_89);
 leer_89("B",b_89);  
 mostrarh_89("A",a_89);
 mostrarh_89("B",b_89);
 mostrarv_89("A",a_89);
 mostrarv_89("B",b_89);
 mostrarb_89(a_89,b_89);
}

void leer_89(string msg,int vec[])
{   int in;    
	for (in=0;in<=2;in=in+1)
	{cout<<"\nvector "<<msg<<" por favor digite el numero ->"<<in+1<<": " ;
	 cin>>vec[in];
	}
}
void mostrarh_89(string msg,int vec[])
{   int in;
	cout<<"\nvector "<<msg<<"->(";
	for (in=0;in<=2;in=in+1)
	{
	cout<<vec[in]<<",";
    }
    cout<<")";
}
void mostrarv_89(string msg,int vec[])
{   int in;
    cout<<"\nvector "<<msg;
	for (in=0;in<=2;in=in+1)
	{
	cout<<"\n"<<vec[in];
    }
    
}
void mostrarb_89(int vec1[],int vec2[])
{   int in;
	cout<<"\n"<<setw(10)<<"vector A"<<setw(10)<<"vector B";
	for(in=0;in<=2;in=in+1)
	{
	cout<<"\n"<<setw(10)<<vec1[in]<<setw(10)<<vec2[in];
	}
}

