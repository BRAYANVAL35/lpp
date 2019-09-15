#include <iostream>
#include <windows.h>
using namespace std;

void coco();
void dia();
void mes();
void mensaje();

void mes()
{
	int mes;
	cout<<"ingrese el mes\n";
	cin>>mes;
	cout<<"\nusted ingreso el mes \n"<<mes;
	
}
void dia()
{
	cout<<"\nhoy es viernes \n";
}
void coco()
{
	string cadena[]={"el","coco","asusta","niños"};
		for(int i=0;i<4;i++)
		{
			cout<<cadena[i]<<" ";
			Sleep[70];
		}
}
main()
{
	mes();
	coco();
	dia();
	coco();
	coco();
}
