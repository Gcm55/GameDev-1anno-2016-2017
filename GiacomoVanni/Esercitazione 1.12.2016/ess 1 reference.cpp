#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <time.h>

using namespace std;

void stampa_stiva(vector<string>& inventory);
void lose_lastpiece(vector<string>& inventory);
void add_firstpiece(vector<string>& inventory, string carico);
bool trade(vector<string>& inventory, string toFind, string toGet);
bool trova(vector<string>& inventory, string toFind);
void ordina(vector<string>& inventory);
int myrandom (int i) { return rand()%i;}


int main()

{
	srand ( unsigned ( time(0) ) );
	vector<string> inventory;
	inventory.push_back("wine");
	inventory.push_back("silk");
	inventory.push_back("avorio");
	inventory.push_back("wood");

	stampa_stiva(inventory);
	lose_lastpiece(inventory);
	stampa_stiva(inventory);
	
	cout<<"You receive a gifts from a friend: a box of tea"<<endl;
	
	add_firstpiece(inventory, "Tea");
	stampa_stiva(inventory);
	trade(inventory,"silk","frumento");
	stampa_stiva(inventory);
	trova(inventory,"wine");
	stampa_stiva(inventory);
	ordina(inventory);
	stampa_stiva(inventory);
	
	random_shuffle ( inventory.begin(), inventory.end(), myrandom);
	stampa_stiva(inventory);
	
	vector<string> merchant;
	merchant.push_back("gold");
	
	
	inventory.swap(merchant);
		stampa_stiva(inventory);
	return 0;
}

void stampa_stiva(vector<string>& inventory)
{
	cout << "\nYour items:\n";
	for (unsigned int i = 0; i < inventory.size(); ++i)
	{
		cout << inventory[i] << endl;
	}
}

void lose_lastpiece(vector<string>& inventory)
{
	cout<<" Oh no, during a storm the last item drop in the sea!"<<endl;
	inventory.pop_back();
	
}

void add_firstpiece(vector<string>& inventory, string carico)
{
	cout<<"Stai inserendo alla stiva il carico:"<<carico<<endl;
	inventory.push_back(carico);
}

bool trade(vector<string>& inventory, string toFind, string toGet)
{
	vector<string>:: iterator i;
	i= find(inventory.begin(), inventory.end() , toFind);
	if(i==inventory.end())
	{
	
		return false;
		
	}
	else
	{
		*i = toGet;
		return true;
	}
}

bool trova(vector<string>& inventory, string toFind)
{
	vector<string>:: iterator i;
	i= find(inventory.begin(), inventory.end() , toFind);
	if(i==inventory.end())
	{
	
		return false;
		
	}
	else
	{
		inventory.erase(i);
		return true;
	}
}
void ordina(vector<string>& inventory)
{
	sort(inventory.begin(),inventory.end());
}
