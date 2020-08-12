#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Player
{
private:
	int money;
	string name;
	vector<int> wallet;

public:
	Player(string&);

	~Player();

	int get_money(int&);
	string get_name();
	void sayHello();
	void showMoney();
};

