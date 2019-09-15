#include <iostream>
//#include <cstdlib>
#include <conio.h>
using namespace std;
main()
{
    double numero1,numero2,suma,n1,n2,n3,resta,m1,m2,m3,multiplicacion,d1,d2,d3,division,a1,a2,a3,area;
	cout<<"buenas tardes aprendices \n \n \n \n";//escriba en lpp//
	cout<<endl;cout<<endl;cout<<endl;
	cout<<"somos mas de las 15 horas \n \n";
	
	//suma//
	cout<<"es hora de sumar \n \n";
	cout<<"\n\n ingrese el primer numero de la suma \n\n";
	cin>>numero1;
	cout<<"\n\n ingrese el segundo numero de la suma \n\n";
	cin>>numero2;
	suma=numero1+numero2;
	cout<<"\n\n el valor de la suma es: \n\n"<<suma;
	
	//resta//
	
	cout<<"\n \n \n es hora de pedir datos \n\n";
	cout<<"ingrese el primer numero de la resta \n\n";
	cin>>n1;
	cout<<"\n\n ingrese el segundo numero de la resta \n\n";
	cin>>n2;
	resta=n1-n2;
	cout<<"el valor de la resta es: \n\n" <<resta;
	
	//multiplicacion//
	
	cout<<"\n \n \n es hora de pedir datos \n\n";
	cout<<"ingrese el primer numero de la multiplicacion \n\n";
	cin>>m1;
	cout<<"\n\n ingrese el segundo numero de la multiplicacion \n\n";
	cin>>m2;
	multiplicacion=n1*n2;
	cout<<"el valor de la multiplicacion es: \n\n" <<multiplicacion;
	
	//division//
	
	cout<<"\n \n \n es hora de pedir datos \n\n";
	cout<<"ingrese el primer numero de la division \n\n";
	cin>>d1;
	cout<<"\n\n ingrese el segundo numero de la division \n\n";
	cin>>d2;
	division=d1/d2;
	cout<<"el valor de la resta es: \n\n" <<division;
	
	//area del triangulo//
	
	cout<<"\n\n ingrese la base del triangulo \n\n";
	cin>>a1;
	cout<<"\n\n ingrese la altura del triangulo \n\n";
	cin>>a2;
	area=(a1*a2)/2;
	cout<<"\n\n el area del triangulo es: \n\n" <<area;
	
	system("pause");
	getch();
	
}
