#include "iostream"
#include "iomanip"
using namespace std;
float ven1_89[5],ven2_89[5],ven3_89[5];
int codven_89[3],in;
void llenar(float vec[])
{
int ind, suma;
suma=0;
	for (ind=0; ind<=2; ind=ind+1)
	{
	cout<<"Digite la venta del mes No"<<ind+1<<": "; cin>>vec[ind];
	suma=suma+vec[ind];
	}	
vec[3]=suma;
vec[4]=(suma/3);


	cout<<"\n"<<setw(10)<<"vector ";
	for(ind=0;ind<=4;ind=ind+1)
	{
	cout<<"\n"<<setw(10)<<vec[ind];
	}


}

void imprimirmio(int codigo[],float vect1[],float vect2[],float vect3[])
{

  int in;
	cout<<"\n"<<setw(10)<<"vector A"<<setw(10)<<"vector B"<<setw(10)<<"vector c";
	for(in=0;in<=4;in=in+1)
	{
	cout<<"\n"<<setw(10)<<vect1[in]<<setw(10)<<vect2[in]<<setw(10)<<vect3[in];
	}


cout<<"                    ***INFORME VENTAS VENDEDORES***                             \n";
cout<<setw(24)<<"CODIGO "<<setw(8)<<"mes 1 "<<setw(8)<<"mes 2"<<setw(8)<<"mes 3"<<setw(8)<<"total"<<setw(8)<<"  promedio"<<"\n";
cout<<setw(24)<<codigo[0]<<setw(8)<<vect1[0]<<setw(8)<<vect1[1]<<setw(8)<<vect1[2]<<setw(8)<<vect1[3]<<setw(8)<<vect1[4]<<"\n";
cout<<setw(24)<<codigo[1]<<setw(8)<<vect2[0]<<setw(8)<<vect2[1]<<setw(8)<<vect2[2]<<setw(8)<<vect2[3]<<setw(8)<<vect2[4]<<"\n";
cout<<setw(24)<<codigo[2]<<setw(8)<<vect3[0]<<setw(8)<<vect3[1]<<setw(8)<<vect3[2]<<setw(8)<<vect3[3]<<setw(8)<<vect3[4]<<"\n";
}

int main()
{
for (in=0; in<=2; in=in+1)	
{
cout<<"\nDigite el codigo del vendedor No"<<in+1<<" : ";
	switch (in)
	{
	case 0:
		do
		{
		cout<<"\nrecuerde que los codigos son de maximo tres cifras\n";
		cin>>codven_89[in];
		}
		while (codven_89[in]>=1000);
		llenar(ven1_89);
	break;
	case 1:
		do
		 {
		 cout<<"\nrecuerde que los codigos son de maximo tres cifras\n";
		 cin>>codven_89[in];
		 }
		 while (codven_89[in]>=1000);
		 llenar(ven2_89);
	break;
	case 2:
		do
		 {
		 cout<<"\nrecuerde que los codigos son de maximo tres cifras\n";
		 cin>>codven_89[in];
		 }
		 while (codven_89[in]>=1000);
		  llenar(ven3_89);
	break;
	}		
}
imprimirmio(codven_89,ven1_89,ven2_89,ven3_89);	
}
