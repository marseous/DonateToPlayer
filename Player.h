#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Player
{
private:
	int donated_money;
	int all_money;
	string name;
	vector<int> wallet;

public:
	Player(string&);

	~Player();

	int get_donation(int&);
	string get_name();
	void sayHello();
	void showMoney();
};

