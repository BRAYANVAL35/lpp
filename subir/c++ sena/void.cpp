#include<iostream>

using namespace std;
void suma();
void mensaje();
void che_cosa();
void resta();

void mensaje()
{
	
	cout<<"Estoy en el mensaje\n";
	
}

void suma()
{
	int n1,n2,suma;
	cout<<"Estoy en la suma\n";
	n1=30;
	n2=28;
	suma=n1+n2;
	cout<<"la suma es: \n"<<suma;
	
}


void resta()
{
	float r1,r2,resta;
	
	cout<<"Estoy en la resta \n";
	cout<<"digite el primer numero \n";
	cin>>r1;
	cout<<"digite el segundo numero \n";
	cin>>r2;
	resta=r1-r2;
	cout<<"la resta es: \n"<<resta;
	
}	

main()
{
	resta();
	suma();
	mensaje();
	resta();
	
}
