#include "Train.h"
#include<iostream>
using namespace std;

Train::Train() : id(0) {};

Train::Train(int i) : id(i) {};

int Train::getid() const {
    return id;
}

void Train::displayTrain() {
    cout << "Train ID " << id << endl;
}

