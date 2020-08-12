#include "Player.h"


using namespace std;

Player::Player()
{
}

int Player::get_money(int &dollar)
{
	wallet.push_back(dollar); // fill out wallet with received dollars

	money += dollar;
	return money;
}

void Player::showMoney()
{
	cout << name << " got " << money << " dollars\n\n";



	cout << "In wallet now\n";
	for (int i = 0; i < wallet.size(); ++i)
	{
		cout << wallet[i] << endl;
	}
}

string Player::get_name(string &n)
{
	name = n;
	return name;
}

void Player::sayHello(string &name)
{
	cout << "Hi " << name << " !" << endl;
}