#include <iostream>
using namespace std;
main()
{
	int cantidad[4][4];
	for(int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			cout<<"digite un numero["<<i<<"]["<<j<<"]\n";
			cin>>cantidad[i][j];
		}
	}
	cout<<"\t\t\t"<<"imprimiendo..."<<endl<<"================================================================="<<endl;
	for (int i=0;i<4;i++)
	{
		for (int j=0;j<4;j++)
		{
			//cout<<"["<<i<<"]["<<j<<"]\n";
			cout<<"|";
			cout<<"\t"<<cantidad[i][j]<<"\t";
			cout<<"|";
		}
		
		cout<</*endl<<"usted va en: "<<i<<*/endl;
	}
	cout<<"=================================================================";
	cout<<"\nmatriz transpuesta"<<endl<<"================================================================="<<endl;
	for (int i=0;i<4;i++)
		{
			for (int j=0;j<4;j++)
			{
				cout<<"|";
				cout<<"\t"<<cantidad[j][i]<<"\t";
				cout<<"|";
			}
			cout<<endl;
			
		}
	cout<<"=================================================================";	
}
