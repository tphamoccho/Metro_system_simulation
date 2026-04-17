#pragma once
using namespace std;
#include<string>
#include<vector>
#include<iostream>
class Station
{
private:
	string name;
public:
	Station();
	Station(const string& _name);
	const string getName() const;
};
