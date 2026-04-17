#pragma once
#include<string>
#include<vector>
#include<iostream>
class Train 
{
private:
	int id;
public:
	Train();
	Train(int i);
	int getid() const;
	void displayTrain();
};

