#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
private:
	int money;
	string name;
	vector<int> wallet;

public:
	Player();
	
	int get_money(int&);
	string get_name(string&);
	void sayHello(string &name);
	void showMoney();
};

