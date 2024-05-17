#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{
int num1_89,num2_89,num3_89,mayor1_89;
	cout<<"por favor digite el primer numero  ";
	cin>> num1_89;
	cout<< "por favor digite el segundo numero  ";
	cin>> num2_89;
	cout<< "por favor digite el tercer numero  ";
	cin>> num3_89 ;
	{
	 if (num1_89!=num2_89 && num1_89!=num3_89 && num2_89!=num3_89 )
		{
		mayor1_89=num1_89;
	     	{
		     if (num1_89<num2_89 )
			mayor1_89=num2_89;
	        }
		    {
		     if (num2_89<num3_89)
			 mayor1_89=num3_89;
	        }
		     cout<< "\n***informe***"
	       	<< "\nnumero 1 = " << num1_89
		    <<  "\nnumero 2 = " << num2_89
		    << "\nnumero 3 = " << num3_89
		    <<  "\nnumero mayor = " << mayor1_89;}
	else
	cout<< " hay numeros iguales , intente de nuevo";
    }
}
