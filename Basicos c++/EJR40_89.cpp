#include "iostream"
#include "iomanip"
using namespace std;
int a_89[2],g_89[2],as_89[2],de_89[2];
void leer_89 (string msg,int vec[],int vec1[],int dim);
void mostrarb_89(int vec1[],int vec2[],int vec3[]); 
void ascent_89 (int vec3[],int vec4[]);
void descent_89 (int vec3[],int vec4[] );
int main ()
{
leer_89("A",a_89,g_89,2);
ascent_89(a_89,as_89);
descent_89(a_89,de_89);
mostrarb_89(g_89,as_89,de_89);
}

void leer_89(string msg,int vec[],int vec1[],int dim)
{   int in;    
	for (in=0;in<=dim;in=in+1)
	{cout<<"\nvector "<<msg<<" por favor digite el numero ->"<<in+1<<": " ;
	 cin>>vec[in];
	 vec1[in]=vec[in];
	}
}
void mostrarb_89(int vec1[],int vec2[],int vec3[])
{   int in;
	cout<<"\n"<<setw(10)<<"vector A"<<setw(30)<<"vector A ascendente"<<setw(30)<<"vector A descendente";
	for(in=0;in<=2;in=in+1)
	{
	cout<<"\n"<<setw(10)<<vec1[in]<<setw(30)<<vec2[in]<<setw(30)<<vec3[in];
	}
}
void descent_89 (int vec3[],int vec4[] )
	{
	int ori,d,gg,in;
	for (ori=0;ori<=1;ori=ori+1)
	{
		for (d=ori+1;d<=2;d=d+1)
			{
			if (vec3[ori]<vec3[d])
				{
				gg=vec3[ori];
				vec3[ori]=vec3[d];
				vec3[d]=gg;
			    }
		    }
    }
	for (in=0;in<=2;in=in+1)
		{
		vec4[in]=vec3[in];
	    }
    }
    
void ascent_89 (int vec3[],int vec4[])
	{
	int ori,d,gg,in;
	for (ori=0;ori<=1;ori=ori+1)
	{
		for (d=ori+1;d<=2;d=d+1)
			{
			if (vec3[ori]>vec3[d])
				{
				gg=vec3[ori];
				vec3[ori]=vec3[d];
				vec3[d]=gg;
			    }
		    }
    }
	for (in=0;in<=2;in=in+1)
		{
		vec4[in]=vec3[in];
	    }
    }    

