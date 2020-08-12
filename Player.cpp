#include "Player.h"


using namespace std;


Player::Player(string &n)
{
	name = n;
	wallet.push_back(1000);
}

Player::~Player()
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
	// sorting money from biggest to smallest
	sort(wallet.begin(), wallet.end(), [](int a, int b) 
		{
			return a > b;
		});

	// full amount in wallet
	cout << name << " got " << money << " dollars\n\n";

	// show all donation list
	cout << "In wallet now\n";
	for (int i = 0; i < wallet.size(); ++i)
	{
		cout << wallet[i] << "\n";
	}
}

string Player::get_name()
{
	return name;
}

void Player::sayHello()
{
	cout << "Hi " << name << " !" << endl;
}