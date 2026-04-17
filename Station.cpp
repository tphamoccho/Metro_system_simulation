#include "Station.h"
#include<iostream>
using namespace std;
Station::Station() : name("") {};

Station::Station(const string & _name) : name(_name) {};

const string Station::getName() const { return name; };
