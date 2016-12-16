#include<iostream>
#include <time.h>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <vector>

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
		bool m_EngineUpgrade;
		bool m_ArmorUpgrade;
		bool m_ShieldUpgrade;
		
	public:
		void Patrol();
		void Attack();
		void Refuel();
		void Control();
		bool Check();
		void Stampa();
		bool EngineUp();
		bool Isalive();
		bool ArmorUp();
		bool ShieldUp();
		void Eupgrade();
		void Eupgradecheck();
		void Aupgradecheck();
		void Supgradecheck();
};
	bool Tank::Isalive()
	{
		return m_Alive;
	}
	
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
	
	bool Tank::EngineUp()
	{	
		m_EngineUpgrade= true;
		return m_EngineUpgrade; 
	}
	
	bool Tank::ArmorUp()
	{
		m_ArmorUpgrade= true;
		return m_ArmorUpgrade;
	}
	
	bool Tank::ShieldUp()	
	{
		m_ShieldUpgrade==true;
		return m_ShieldUpgrade;
	}
	
	bool Tank::Check()
	{
		if(m_Alive==true)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void Tank::Eupgradecheck()
	{
		if(m_EngineUpgrade= true)
		{
			cout<<"Buff: E"<<endl;
		}
	}
	
	void Tank::Aupgradecheck()
	{
		if(m_ArmorUpgrade= true)
		{
			cout<<"Buff: A"<<endl;
		}
	}
		
	void Tank::Supgradecheck()
	{
		if(m_ShieldUpgrade= true)
		{
			cout<<"Buff: S"<<endl;
		}
	}
	
	void Tank::Patrol()
	{	
	
		if((Isalive() == true ) && (EngineUp()==true))
		{
			int distance = rand() % (4+2);
		m_Health=m_Health-(distance*2);
		m_Fuel= m_Fuel-(distance*4);
		m_Ammo= m_Ammo-(distance*2);
		Control();
		value= value+1;
		}
		else
		{
		
		
		int distance = rand() % (4+2);
		m_Health=m_Health-(distance*2);
		m_Fuel= m_Fuel-(distance*8);
		m_Ammo= m_Ammo-(distance*2);
		Control();
		value= value+1;
	
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
		value-=5-death;
		}
		else
		{
			cout<<"this tank is dead"<<endl;
		}
	}
	
	void Tank::Eupgrade()
	{
		value-=10;
		EngineUp();
	}
	
	
int main()
{
	vector<Tank> Tanks;
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
	cout<<"1 for Patrol, 2 for Attack 3 for Refuel and repair 4 for an Engine upgrade 5 for Armor Upgrade abd 6 for Shell upgrade"<<endl;
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

// Da qui cominciano sicuramente gli errori, necessito di correzione.
		
		
		case 4:
				
			if( tiger1.Check()== true  )
			{
				tiger1.Eupgrade();
			}
			else if( tiger2.Check()== true  )
			{
				tiger2.Eupgrade();
			}
			else if( tiger3.Check()== true  )
			{
				tiger3.Eupgrade();
			}
			else if( tiger4.Check()== true  )
			{
				tiger4.Eupgrade();
			}
			else if( tiger5.Check()== true  )
			{
				tiger5.Eupgrade();
			}
			else 
			{
				cout<<"All of your tanks are dead !"<<endl;
			}
			
			tiger1.Eupgradecheck();
			tiger1.Aupgradecheck();
			tiger1.Supgradecheck();
			
			tiger2.Eupgradecheck();
			tiger2.Aupgradecheck();
			tiger2.Supgradecheck();
			
			tiger2.Eupgradecheck();
			tiger2.Aupgradecheck();
			tiger2.Supgradecheck();
			
			tiger2.Eupgradecheck();
			tiger2.Aupgradecheck();
			tiger2.Supgradecheck();
			
			tiger2.Eupgradecheck();
			tiger2.Aupgradecheck();
			tiger2.Supgradecheck();
			
			break;
	}
	
	
}
	
	
	
	
	return 0;
}
