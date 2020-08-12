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

string Player::get_name()
{
	return name;
}

void Player::sayHello()
{
	cout << "Hi " << name <<
		"\nYou got 1000$ bonus!\n";
}

int Player::get_donation(int &dollar)
{
	wallet.push_back(dollar); // fill out wallet with received dollars

	donated_money += dollar;
	return donated_money;
}

void Player::showMoney()
{
	// sorting money from biggest to smallest
	sort(wallet.begin(), wallet.end(), [](int a, int b) 
		{
			return a > b;
		});

	// full amount in wallet
	cout << name << " got " << donated_money << " dollars by donation\n\n";

	// show all donated money
	cout << "\tIn wallet now\n";
	for (int i = 0; i < wallet.size(); ++i)
	{
		cout << wallet[i] << "\n";
		all_money += wallet[i];
	}

	// count all money in wallet
	cout << "\n\t" << all_money << " dollars in total\n\n";
}


