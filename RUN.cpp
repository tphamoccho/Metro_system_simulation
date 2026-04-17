#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

#include "Station.h"
#include "MetroLine.h"
#include "Train.h"
#include "MetroSystem.h"


void displayMenu() {
    cout << "Metro System Menu:\n";
    cout << "1. Display Metro System\n";
    cout << "2. Save Data\n";
    cout << "3. Load Data\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
}

int main() {
    MetroSystem mSys;
    displayMenu();
    
    // Add trains to the metro system
    Train* t401 = new Train(1);
    Train* t402 = new Train(2);
    mSys.addTrain(t401);
    mSys.addTrain(t402);
    
    // Add metro lines to the metro system
    Station* S1 = new Station("Kelenfold");
    Station* S2 = new Station("Bikas");
    Station* S3 = new Station("Ujbuda");
    Station* S4 = new Station("Moricz");
    Station* S5 = new Station("SzentGellert");
    Station* S6 = new Station("Fovam");
    Station* S7 = new Station("Kalvin");
    Station* S8 = new Station("Rakoczi");
    Station* S9 = new Station("JanosPalPapa");
    Station* S10 = new Station("Keleti");
    Station* S11 = new Station("Corvin");
    Station* S12 = new Station("Deak-M3");
    MetroLine* M4 = new MetroLine("Line1");
    M4->addStation(*S1);
    M4->addStation(*S2);
    mSys.addLine(M4);

    MetroLine* blueLine = new MetroLine("blueLine");
    blueLine->addStation(*S7);
    blueLine->addStation(*S11);
    blueLine->addStation(*S12);
    mSys.addLine(blueLine);
    

    int choice;
    while (true) {
        displayMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:

            mSys.display();
            break;
        /*
        case 2:
            // Save data to a file
            cout << "Enter filename to save data: ";
            string filename;
            cin >> filename;
            // Save the metro system to a file
            break;
        case 3:
            // Load data from a file
            cout << "Enter filename to load data: ";
            string loadFilename;
            cin >> loadFilename;
            // Load the metro system from a file
            break;
            */
        
        case 4:
            // Quit the program
            cout << "Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}