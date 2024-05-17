#include <iostream>
#include <locale.h>
using namespace std;

void impresion (float numero1,float numero2,float numero3);

int main()
{//inicio
float num1_89,num2_89,num3_89;

cout<<"\nPrograma para clasificar los numeros de menor a mayor";
cout<<"\npor favor ingrese los numero\n";
cin>>num1_89>>num2_89>>num3_89;

	if ((num1_89!=num2_89) && (num2_89!=num3_89) && (num1_89!=num3_89))
	{
		if (num1_89>num2_89)
		{
			if (num2_89>num3_89)
			{
				impresion(num1_89,num2_89,num3_89);
		    }
			else
			{
				if (num1_89>num3_89)
				{
					impresion(num1_89,num3_89,num2_89);
				}
				else
				{
					impresion(num3_89,num1_89,num2_89);
			    }
		    }
		}

		    
	   else
	   {
			if (num2_89>num3_89)
			{
				if (num1_89>num3_89)
				{
					impresion(num2_89,num1_89,num3_89);
                }
				else
				{
					impresion(num2_89,num3_89,num1_89);
				}

			}
			else
			{
				impresion(num3_89,num2_89,num1_89);
			}
		}
}
	else
	{
		cout<<"\nlos numeros no son diferentes\n";
    }

system("pause");
}//fin

//funcion impimir
void impresion (float numero1,float numero2,float numero3)
{
    cout<<"\n***informe de los numeros***";
	cout<<"\nel mayor es: "<<numero1;
	cout<<"\nel mediano es: "<<numero2;
	cout<<"\nel menor es: "<<numero3<<endl;
}
