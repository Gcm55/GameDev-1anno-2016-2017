#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;




int main()
{  	
	int random1,random2;
	const int R=5,C=5;
	int i=0,j=0;
	char mat[R][C];
	srand((unsigned)time(NULL));
	char cpu= 'x';
	random1=3; //rand()%5;
	random2=3; //rand()%5;
	
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			mat[i][j]= ' ';
		}
	}
	mat[random1][random2]= cpu;
	
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			cout<<" "<<mat[i][j]<<"|";
		}
		cout<<endl;
	}
	short unsigned int sceltax,sceltay;
	cout<<"Giocatore inserisci X ed Y di dove vuoi colpire(compresi da 1 a 5:"<<endl;
	cin>>sceltax;
	cin>>sceltay;
	if(sceltax>5 || sceltay>5)
	{
		cout<<"Inserisci un numero da 1 a 5 amico."<<endl;
	}
		for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if(mat[sceltax][sceltay]== cpu)
			{
				cout<<" Hai fatto centro!!"<<endl;
			}
		}
		
	}
	return 0;
}
