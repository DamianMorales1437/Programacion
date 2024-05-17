#include <iostream>
#include <locale.h>
using namespace std;

void impresion(char msg[],float volt,float reseq,float corr,float res1,float res2,float res3,float volt1,float volt2,float volt3,float corr1,float corr2,float corr3);

int main()
{
float r1_89,r2_89,r3_89,i_89,v1_89,v2_89,v3_89,v_89,req_89,i1_89,i2_89,i3_89;
char volt_89,opc_89;

	cout<<"ingrese los valores de la resistencias\n";
	cin>>r1_89;
	if (0<=r1_89)
	{
		cin>>r2_89;
		if (0<=r2_89)
		{
			cin>>r3_89;
			if (0<=r3_89)
			{
				cout<<"\nel circuito es en:";
				cout<<"\na)serie";
				cout<<"\nb)paralelo\n";
				cin>>opc_89;
				switch(opc_89)
				{
				case 'a':
						cout<<"\nel circuito es en serie";
						cout<<"\ningrese el valor de la corriente del circuito en [AMP]\n";
						cin>>i_89;
						v1_89=i_89*r1_89;
						v2_89=i_89*r2_89;
						v3_89=i_89*r3_89;
						v_89=i_89*(r1_89+r2_89+r3_89);
						req_89=r1_89+r2_89+r3_89;
						i1_89=i_89;
						i2_89=i_89;
						i3_89=i_89;
						impresion("serie",v_89,req_89,i_89,r1_89,r2_89,r3_89,v1_89,v2_89,v3_89,i1_89,i2_89,i3_89);
						break;
				case 'b':
						if ((r1_89!=0) && (r2_89!=0) && (r3_89!=0))
						{
							cout<<"\nel circuito es en paralelo\n";
							cout<<"ingrese el valor del voltaje del circuito[volt]\n";
							cin>>v_89;
							v1_89=v_89;
							v2_89=v_89;
							v3_89=v_89;
							req_89=(1/((1/r1_89)+(1/r2_89)+(1/r3_89)));
							i_89=(v_89/req_89);
							i1_89=(v_89/r1_89);
							i2_89=(v_89/r2_89);
							i3_89=(v_89/r3_89);
							impresion("paralelo",v_89,req_89,i_89,r1_89,r2_89,r3_89,v1_89,v2_89,v3_89,i1_89,i2_89,i3_89);
							break;
						}
							
						else
						{
							cout<<"\nhay corto circuito,no pueden haber resistencias iguales a cero!\n";
					}
					default:
						cout<<"\nel circuito no es ni en paralelo ni en serie\n";
						break;
			}
		}
			else
			{
				cout<<"\nno hay resistencias negativas\n";
			}
		}
		else
		{
			cout<<"\nno hay resistencias negatias\n";
	}
}
	else
	{
		cout<<"no hay resistencias negativas";
    }

system("pause");
}//fin
void impresion(char msg[],float volt,float reseq,float corr,float res1,float res2,float res3,float volt1,float volt2,float volt3,float corr1,float corr2,float corr3)
{
cout<<"\n***informe del circuito en "<<msg<<"***\n";

cout<<"voltaje del circuito: "<<volt<<" [volt]"<<endl;
cout<<"resistencia equivalente: "<<reseq<<" [ohmn]"<<endl;
cout<<"corriente del circuito: "<<corr<<" [AMP]"<<endl;
cout<<"resistencia 1: "<<res1<<" [ohmn]"<<endl;
cout<<"resistencia 2: "<<res2<<" [öhmn]"<<endl;
cout<<"resistencia 3: "<<res3<<" [ohmn]"<<endl;
cout<<"voltaje en la resistencia 1: "<<volt1<<" [volt]"<<endl;
cout<<"recibir 'voltaje en la resistencia 2: "<<volt2<<" [volt]]"<<endl;
cout<<"voltaje en la resistencia 3: "<<volt3<<" [volt]"<<endl;
cout<<"corriente en la resistencia 1: "<<corr1<<" [AMP]"<<endl;
cout<<"corriente en la resistencia 2: "<<corr2<<" [AMP]"<<endl;
cout<<"corriente en la resistencia 3: "<<corr3<<" [AMP]"<<endl;
}


