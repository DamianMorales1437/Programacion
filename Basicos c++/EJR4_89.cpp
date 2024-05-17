#include "iostream"

#include "locale.h"

using namespace std;

int main ()
{//inicio
int num1_89;
cout<<"\n digite el numero: ";
cin>>num1_89;

if(num1_89%2==0)
{if(num1_89>=0)
  {cout<<"\n\n ***INFORME NUMERO***"
     <<"\n numero : "<<num1_89
     <<"\n numero par positivo";
  }
  else
    cout<<"\n\n ***INFORME NUMERO***"
     <<"\n numero : "<<num1_89
     <<"\n numero par negativo";
     
}
else
if(num1_89>=0)
  {cout<<"\n\n ***INFORME NUMERO***"
     <<"\n numero : "<<num1_89
     <<"\n numero impar positivo";
  }
  else
    cout<<"\n\n ***INFORME NUMERO***"
     <<"\n numero : "<<num1_89
     <<"\n numero impar negativo";
     

}



