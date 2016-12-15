#include<iostream>
#include <time.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>


using namespace std;

int death=0;
int value=0;
class Tank
{
	private:
		
		int m_Fuel = 100;
		int m_Health = 100;
		int m_Ammo = 100;	
		bool m_Alive=true;
		
	public:
		void Patrol();
		void Attack();
		void Refuel();
		void Control();
		void Check();
		void Stampa();
};

	void Tank::Control()
	{
			if(m_Health<=0)
		{
			m_Alive= false;
			death+=1;
		}
		else if(m_Fuel<=0)
		{
			m_Alive= false;
			death+=1;
		}
		else if(m_Ammo<=0)
		{
			m_Alive= false;
			death+=1;
		}
	}
	void Tank::Stampa()
	{
	cout<<"Vita del tank: "<<m_Health<<" "<< "munizioni del tank:"<< m_Ammo<< " "<< "Carburante del tank "<< m_Fuel<<endl;	
	}
	void Tank::Check()
	{
		if(m_Alive==true)
		{
			cout<<"This tank is alive."<<endl;
		}
		else
		{
			cout<<"This tank is dead."<<endl;
		}
	}
	
	
	
	void Tank::Patrol()
	{	
		if(m_Alive == true)
		{
		
		int distance = rand() % (4+2);
		
		m_Health=m_Health-(distance*2);
		m_Fuel= m_Fuel-(distance*8);
		m_Ammo= m_Ammo-(distance*2);
		Control();
		value= value+1;
		
		}
		else
		{
			cout<<"This tank is dead."<<endl;
		}
	}
	void Tank::Attack()
	{	
			if(m_Alive == true)
		{
		int enemy= rand() % (4+2);
		
		m_Health=m_Health-(enemy*7);
		m_Fuel= m_Fuel-(enemy*3);
		m_Ammo= m_Ammo-(enemy*7);
		Control();
		value=value+2;
		
		}
		else
		{
			cout<<"This tank is dead."<<endl;
		}
	}
	void Tank::Refuel()
	{	
			if(m_Alive == true)
		{
		int supply= rand() % (4+2);
		
		m_Health=m_Health+ (supply*5);
		m_Fuel= m_Fuel+(supply*5);
		m_Ammo= m_Ammo+(supply*5);
		Control();
		value= value-5;
		
		}
		else
		{
			cout<<"this tank is dead"<<endl;
		}
	}
	

	
	
int main()
{
	
	int score;
	srand( int(time(NULL)));
	Tank tiger1;
	Tank tiger2;
	Tank tiger3;
	Tank tiger4;
	Tank tiger5;
	
	int choice;

	while  ((value<100) && (death<5) )
	{
	cout<<"Scegli la missione amico:"<<endl;
	cout<<"1 for Patrol, 2 for Attack 3 for Refuel and repair."<<endl;
	cin>>choice;
	
	cout<<"Your Score is: "<<value<<endl;

	
	
	
	switch(choice)
	{
		case 1:
			tiger1.Patrol();
			tiger1.Stampa();
			tiger2.Patrol();
			tiger2.Stampa();
			tiger3.Patrol();
			tiger3.Stampa();
			tiger4.Patrol();
			tiger4.Stampa();
			tiger5.Patrol();
			tiger5.Stampa();
			
			break;
			
		case 2:
			tiger1.Attack();
			tiger1.Stampa();
			tiger2.Attack();
			tiger2.Stampa();
			tiger3.Attack();
			tiger3.Stampa();
			tiger4.Attack();
			tiger4.Stampa();
			tiger5.Attack();
			tiger5.Stampa();
			break;
			
		case 3:
			tiger1.Refuel();
			tiger1.Stampa();
			tiger2.Refuel();
			tiger2.Stampa();
			tiger3.Refuel();
			tiger3.Stampa();
			tiger4.Refuel();
			tiger4.Stampa();
			tiger5.Refuel();
			tiger5.Stampa();
			break;

			
	}
	
	
}
	
	
	
	
	return 0;
}
