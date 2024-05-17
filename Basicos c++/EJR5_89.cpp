#include "iostream"
#include "locale.h"
using namespace std;
int main ()
{//inicio
int num1_89,num2_89,num3_89;
cout<<"\n\n por favor digite tres numeros enteros diferentes "
<<"\n\n por favor digite el primer numero ";
cin>>num1_89;
cout<<"\n\n por favor digite el segundo numero ";
cin>>num2_89;
cout<<"\n\n por favor digite el tercer numero ";
cin>>num3_89;
if (num1_89==num2_89 && num2_89==num3_89)
  {cout<<"\n\nhostia tio que el enunciado decia que numeros diferentes";
  }
else 
  {if (num1_89>num2_89 && num1_89>num3_89)
	{cout<<"\n\n ***informe***"
     <<"\nnumero 1 : "<<num1_89
     <<"\nnumero 2 : "<<num2_89
     <<"\nnumero 3 : "<<num3_89
     <<"\nel numero mayor es : "<<num1_89;
	}
   else 
    {if (num2_89>num1_89 && num2_89>num3_89)
      {cout<<"\n\n ***informe***"
        <<"\nnumero 1 : "<<num1_89
        <<"\nnumero 2 : "<<num2_89
        <<"\nnumero 3 : "<<num3_89
        <<"\nel numero mayor es : "<<num2_89;
	  }
	 else
	  {cout<<"\n\n ***informe***"
       <<"\nnumero 1 : "<<num1_89
       <<"\nnumero 2 : "<<num2_89
       <<"\nnumero 3 : "<<num3_89
       <<"\nel numero mayor es : "<<num3_89;
	  }  
	}
  }
}
