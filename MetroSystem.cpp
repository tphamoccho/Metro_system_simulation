#include "MetroSystem.h"
#include"MetroLine.h"
#include"Station.h"
#include"Train.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;    
MetroSystem::MetroSystem() : lines(), trains() {};

MetroSystem::MetroSystem(vector<MetroLine*> lines, vector<Train*> trains) : lines(lines), trains(trains) {};

void MetroSystem::addLine(MetroLine* l) {
    lines.push_back(l);
}

void MetroSystem::addTrain(Train* t) {
    trains.push_back(t);
}

void MetroSystem::saveDataToFile(string filename) {
    ofstream file(filename);
    if (file.is_open()) {
        for (Train* t : trains) {
            file << "Train " << t->getid() << endl;
        }
        file.close();
        cout << "Data saved to file successfully." << endl;
    }
    else {
        cout << "Unable to open file for saving data." << endl;
    }
}

void MetroSystem::loadDataFromFile(string filename) {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    }
    else {
        cout << "Unable to open file for loading data." << endl;
    }
}

void MetroSystem::display() {
    cout << "Trains:\n";
    for (const auto& train : trains) {
        cout << "Train ID: " << train->getid() << endl;
    }
    cout << "Metro Lines:\n";
    for (const auto& line : lines) {
        cout << "Metro Line Name: " << line->getName() << endl;
        cout << "Stations: ";
        for (const auto& station : line->getStations()) {
            cout << station->getName() << " ";
        }
        cout << endl;
    }
}

MetroSystem::~MetroSystem() {
    // destructor
    // deallocated memory
    for (MetroLine* line : lines) {
        delete line;
    }
    for (Train* train : trains) {
        delete train;
    }
}
