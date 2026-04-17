#pragma once
using namespace std;
#include<string>
#include<vector>
#include<iostream>
#include"Station.h"
#include"MetroLine.h"
#include"Train.h"
class MetroSystem : public Train, public MetroLine
{
private:
	vector<MetroLine*> lines;
	vector<Train*> trains;
public:
	MetroSystem();
	MetroSystem(vector<MetroLine*> _lines, vector<Train*> _trains);
	~MetroSystem();
	void addLine(MetroLine* l);
	void addTrain(Train* t);
	void saveDataToFile(string filename);
	void loadDataFromFile(string filename);
	void display();
	
};


