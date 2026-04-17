#pragma once
using namespace std;
#include<string>
#include<vector>
#include<iostream>
#include"Station.h"
class MetroLine : public Station
{
private:
    string name;
    vector<Station*> stations;

public:
    MetroLine();
    MetroLine(const string& _name);
    ~MetroLine();
    void addStation(const Station& stationName);
    const vector<Station*>& getStations() const;
    void displayLine();
};
