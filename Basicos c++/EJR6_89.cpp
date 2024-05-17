#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{

	int num1_89,num2_89,num3_89;
	cout<< "digite el primer numero  ";
	cin>>num1_89;
	cout<< "digite el segundo numero  ";
	cin>> num2_89;
	cout<< "digite el tercer numero  ";
	cin>> num3_89;
	{
	 if (num1_89!=num2_89 && num1_89!=num3_89 && num2_89!=num3_89 )
		{
		 if (num1_89>num2_89)
			{
			 if( num2_89>num3_89)
				cout<< "\n***informe***"
			    << "\nel mayor es "<<num1_89
				<< "\nel intermedio es "<<num2_89
				<< "\nel menor es " <<num3_89;
			else
				{
				 if (num1_89>num3_89 )
					cout<< "\n***informe***"
			        << "\nel mayor es "<<num1_89
				    << "\nel intermedio es "<<num3_89
				    << "\nel menor es " <<num2_89;
				else
					cout<< "\n***informe***"
			        << "\nel mayor es "<<num3_89
				    << "\nel intermedio es "<<num1_89
				    << "\nel menor es " <<num2_89;
			    }
		    }
		else
			{
			 if (num2_89>num3_89 )
				{
				 if ( num1_89>num3_89 )
					cout<< "\n***informe***"
			        << "\nel mayor es "<<num2_89
				    << "\nel intermedio es "<<num1_89
				    << "\nel menor es " <<num3_89;
				else
					cout<< "\n***informe***"
			        << "\nel mayor es "<<num2_89
				    << "\nel intermedio es "<<num3_89
				    << "\nel menor es " <<num1_89;
			    }
			else
				cout<< "\n***informe***"
			    << "\nel mayor es "<<num3_89
				<< "\nel intermedio es "<<num2_89
				<< "\nel menor es " <<num1_89;
		    }
	    }
	else
		cout<< "\nlos numeros son iguales por favor intente de nuevo";
   }
}
