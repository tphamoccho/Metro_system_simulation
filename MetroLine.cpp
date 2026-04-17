#include "MetroLine.h"
#include"Station.h"
#include<iostream>
using namespace std;

MetroLine::MetroLine() : name("Default Line") {}

MetroLine::MetroLine(const string& _name) : name(_name) {}

MetroLine::~MetroLine() {
    for (Station* s : stations) {
        delete s;
    }
}

void MetroLine::addStation(const Station& stationName) {
    Station* newStation = new Station(stationName);
    stations.push_back(newStation);
}

const vector<Station*>& MetroLine::getStations() const {
    return stations;
}
void MetroLine::displayLine() {
    cout << "Metro Line: " << name << endl;
    cout << "Stations:" << endl;
    for (Station* s : stations) {
        s->getName();
    }
}