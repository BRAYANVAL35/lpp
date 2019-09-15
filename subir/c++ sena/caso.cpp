#include <iostream>
using namespace std;
main ()
{

int opcion;
cout<<"trabajando con switch\n\n";
cout<<"denermos el menu n \n\n";
cout<<"para uno ingrese el numero \n\n";
cout<<"para dos ingrese el 2\n\n" ;

cout<<"ingrese el numero de su eleccion";
cin>>opcion;

switch(opcion)
	{
		
		case 1:
			cout<<"estoy en uno \n";
			break;
		case 4:
			cout<<"estoy en cuatro \n";
			break;
		case 2:
			cout<<"estoy en dos \n";
			break;
		default:
			cout<<"no estoy en nada";
			
	}

}
