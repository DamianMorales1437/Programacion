#include "iostream"
#include "iomanip"
using namespace std; 

int main ()
{
	int a_89[2],ind_89;
	for (ind_89=0;ind_89<=2;ind_89=ind_89+1)
	{cout<<"\npor favor digite el numero ->"<<ind_89+1<<": " ;
	 cin>>a_89[ind_89];
	}
	for (ind_89=0;ind_89<=2;ind_89=ind_89+1)
	{
	cout<<a_89[ind_89];
    }
}
