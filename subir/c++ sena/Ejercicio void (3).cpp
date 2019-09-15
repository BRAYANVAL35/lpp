#include<iostream>

using namespace std;
void resta();
void tabla_de_multiplicacion();
void pares();
void palabra();
void area();
void mensaje();
void miercoles();
void mensaje2();

	main()
	{
	int opcion;
	cout<<"1 para la resta \n\n";
	cout<<"8 para ver la tabla \n\n";
	cout<<"2 para ver los pares e impares \n\n";
	cout<<"3,9 o 5 digita una palabra hasta pulsar n \n\n";
	cout<<"6 para calcular el area del triangulo \n\n";
	cout<<"4 mensaje \n\n";
	cout<<"7 hoy es miercoles \n\n";
	
	cout<<"ingrese el numero de su eleccion";
	cin>>opcion;

	switch(opcion)
		{
			case 1:
				resta();
				break;
			case 8:
				tabla_de_multiplicacion();
				break;
			case 2:
				pares();
				break;
			case 3:
	
			case 9:
			
			case 5:
				palabra();
				break;
			case 6:
				area();
				break;
			case 4:
				mensaje();
				break;
			case 7:
				miercoles();
				break;
			default:
				mensaje2();
				mensaje2();
		}
	}
	
	void mensaje2()
	{
		
		cout<<"Estoy saliendo \n";
		
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
	
	void tabla_de_multiplicacion()
		{
			int i,j;
			for (i=1;i<11;i++)
			{
				for (j=1;j<11;j++)
				{
					cout<<j<<"*"<<"="<<j*i<<endl;
				}
			}
		}
	
	void pares()
		{
			int i,a,b;
			
			cout<<"\n ingrese un numero \n";
			cin>>a;
			
				if (a%2==0)
				{			
						for (i=10;i<=30;i=i+2)
						{
							
						cout<<"es par: "<<i;
						cout<<endl;
						
						}
				}
						else
						for (b=0;b<=10;b++)
						
							{
								cout<<endl;
								cout<<"es impar: "<<b;
							}
		}
	
	void palabra()
	{

		char respuesta;
		while (respuesta!='n')
			{
				cout<<"haga mientras";
				cin>>respuesta;
			}
	}
	
	void area()
		{
			int i,a,b;
			
			cout<<"\n ingrese un numero \n";
			cin>>a;
			
				if (a<5)
				{			
						for (b=7;b<=37;b++)
						
							{
								cout<<endl;
								cout<<"es impar: "<<b;
							}
				}
				else
					{
							int a1,a2,a3;
							cout<<"digite la base del triangulo";
							cin>>a1;
							cout<<"digite la altura del triangulo";
							cin>>a2;
							a3=(a1*a2)/2;
							cout<<"el area del triangulo es: "<<a3;
					}
	}
	
	void mensaje()
	{
		cout<<"buenas tardes \n";
	}
	
	void miercoles()
	{
	int lol;
	while (lol!=123)
	
		{
			for (int l1=0;l1<=15;l1++)
			{
				cout<<"hoy es miercles \n";
				
			}
			cout<<"ingrese otro numero";
			cin>>lol;
		}
	}


