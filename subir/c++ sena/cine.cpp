#include<iostream>
using namespace std;

main()
{
	int contador,n1,n2,n3;
	contador=0;
	
	do
	{
	cout<<"va en la vuelta: "<<contador<<endl;
	cout<<"programa para ingresar 3 nuemros e imprimirlos en orden \n\n";
	cout<< "ingrese el primer numero \n\n";
	cin>>n1;
	cout<<"ingrese segundo numero \n\n";
	cin >>n2;
	cout<<"ingrese tercer numero \n\n";
	cin>>n3;
	if ((n1>n2)&&(n2>n3))
	{
		cout<<"el numero mayor es: "<<n1<<endl;
		cout<< "el munero medio es: "<<n2<<endl;
		cout<< "el numero menor es:" <<n3<<endl; 
	}
	else if ((n2>n1)&&(n2>n3))
	{
		cout<<"el numero mayor es: "<<n2<<endl;
		cout<< "el munero medio es: "<<n1<<endl;
		cout<< "el numero menor es:" <<n3<<endl; 
	}
	else if ((n3>n2)&&(n3>n1))
	{
	
		cout<<"el numero mayor es: "<<n3<<endl;
		cout<< "el munero medio es: "<<n2<<endl;
		cout<< "el numero menor es:" <<n1<<endl; 
		}
	else if (n1=n2)
	{
		cout<< "no se puede efectuar la operacion porque dos numeros son iguales";
	
}
	else if (n1=n3)
	{
			cout<< "no se puede efectuar la operacion porque dos numeros son iguales";
		
	}
	else if (n2=n1)
	{
			cout<< "no se puede efectuar la operacion porque dos numeros son iguales";
	}
	else if (n2=n3)
	{
		cout<< "no se puede efectuar la operacion porque dos numeros son iguales";
	}
	else if (n3=n1)
	{
		cout<< "no se puede efectuar la operacion porque dos numeros son iguales";
	}
	else if (n3=n2)
	{
		cout<< "no se puede efectuar la operacion porque dos numeros son iguales";
	}
		contador=contador+1;
	}
	
	while (contador<3);	

}

