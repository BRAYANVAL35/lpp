#include <iostream>
using namespace std;
main ()
{

int opcion;
cout<<"1 para la suma\n\n";
cout<<"2 para la resta \n\n";
cout<<"3 para la division \n\n";
cout<<"4 para la multiplicacion\n\n" ;

cout<<"ingrese el numero de su eleccion";
cin>>opcion;

switch(opcion)
	{
		
		case 1:
			int n1,n2,n3;
			cout<<"estoy en suma \n";
			cout<<"ingrese el primer numero\n";
			cin>>n1;
			cout<<"ingrese el segundo numero\n";
			cin>>n2;
			n3=n1+n2;
			cout<<"el resultado es: \n"<<n3;
			break;
		case 2:
			int r1,r2,r3;
			cout<<"estoy en resta \n";
			cout<<"ingrese el primer numero\n";
			cin>>r1;
			cout<<"ingrese el segundo numero\n";
			cin>>r2;
			r3=r1-r2;
			cout<<"el resultado es: \n"<<r3;
			break;
		case 3:
			double d1,d2,d3;
			cout<<"estoy en division \n";
			cout<<"ingrese el primer numero\n";
			cin>>d1;
			cout<<"ingrese el segundo numero\n";
			cin>>d2;
			d3=d1/d2;
			cout<<"el resultado es: \n"<<d3;
			break;
		case 4:
			int m1,m2,m3;
			cout<<"estoy en multiplicacion \n";
			cout<<"ingrese el primer numero\n";
			cin>>m1;
			cout<<"ingrese el segundo numero\n";
			cin>>m2;
			n3=m1*m2;
			cout<<"el resultado es: \n"<<m3;
			break;
		default:
			cout<<"no estoy en nada";
			
	}

}

