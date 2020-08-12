#include <iostream>

#include "Player.h"

using namespace std;

void CheckValidName(string &n);

bool wePassed = false;

int main()
{
	cout << "Hello! Type your name: " << endl;
	string pName;

	do
	{
		cin >> pName;
		CheckValidName(pName);
	}while (!wePassed);
	
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
		p.get_donation(donate);
		cout << "Wanna donate more?\n $: ";
	}while (donate != 0);


	// Shows and counts all money in wallet
	p.showMoney();

}

void CheckValidName(string& n)
{
	bool digitFound = false;
	auto it = n.begin();
	for (auto i = it; i != n.end(); ++i)
	{
		if (isdigit(*i))
		{
			wePassed = false;
			digitFound = true;
		}
		else
		{
			wePassed = true;
		}
	}
	if (digitFound) { cout << "\nPlease enter name w/o numbers\n\n"; }
}
