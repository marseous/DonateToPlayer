#include <iostream>

#include "Player.h"

using namespace std;

int main()
{
	cout << "Hello! Type your name: " << endl;
	string pName;
	cin >> pName;


	// Creates a new player and greets
	Player p(pName);
	cout << "\n";
	p.sayHello();
	cout << "\n";

	
	// Asking for donation
	cout << "Donate money to " << p.get_name() << "\n $: ";
	int donate;
	do
	{
		cin >> donate;
		if (donate == 0) { cout << "\nThank you!\n"; break; }
		p.get_money(donate);
		cout << "Wanna donate more?\n $: ";
	}while (donate != 0);


	// Shows and counts all money in wallet
	p.showMoney();

}
