#include <iostream>

#include "Player.h"

using namespace std;

int main()
{
	Player p;

	cout << "Hello! Type your name: " << endl;
	string pName;
	cin >> pName;
	p.get_name(pName);
	int donate;

	cout << endl;
	p.sayHello(pName);
	cout << "\n";
	cout << "Donate money to " << pName << "\n $: ";


	do
	{
		cin >> donate;
		if (donate == 0) { cout << "\nThank you!\n"; break; }
		p.get_money(donate);
		cout << "Wanna donate more?\n $: ";
	}while (donate != 0);

	p.showMoney();

}
