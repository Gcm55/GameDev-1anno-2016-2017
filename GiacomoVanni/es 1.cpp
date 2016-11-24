#include<iostream>
using namespace std;

int main()
{
	int i=0,n=10,j;
	int leaderboard[n];
	double media=0;
	
	for(i=0;i<n;i++)
	{
		cout<<"Inserisci il punteggio del giocatore : "<<i+1<<endl;
		cin>>leaderboard[i];
	}
	
	for(i=0;i<n;i++)
	{
		cout<<"Punteggio del giocatore: "<<i+1<<" :"<<leaderboard[i]<<endl;
	}
	for(i=0;i<n;i++)
	{
		media= media+leaderboard[i];
	}
	cout<<"la media dei punteggi è :"<< media/n<<endl;
  
  for(j=i-1; j>=0; j--)
      {
	    cout<<"Punteggio del giocatore invertito: "<<j<<" :"<< leaderboard[j]<<endl;
}
	return 0;
}
