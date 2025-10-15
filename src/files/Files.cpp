//
// Created by Carlos José Requena Jiménez on 14/10/25.
//
#include <fstream>
#include <iostream>
#include <istream>
#include <ostream>
#include "Files.h"
using namespace std;

// fstream - include read (ios::in), write (ios::out), append (ios::app) modes
// ofstream - write only (will overwrite the file if already exists!)
// ifstream - read only

void Files::fstreamWriteOnNewFile() {
    fstream myFile;
    myFile.open("./my-file.txt", ios::out);
    myFile << "Hello, World! ::  fstream" << endl;
    myFile.close();
}

void Files::fstreamAppendOnExistingFile() {
    fstream myFile;
    myFile.open("./my-file.txt", ios::app);
    for (int i = 0; i<10; i++) {
        myFile << "Append! " << i << endl;
    }
    myFile.close();
}

void Files::fstreamReadOnExistingFile() {
    fstream myFile;
    myFile.open("./my-file.txt", ios::in);
    string line;
    while (getline(myFile, line) ) {
        cout << line << endl;
    }
}

void Files::ofstreamWriteOnNewFile() {
    ofstream myFile;
    myFile.open("./my-ofstream-file.txt", ios::out);
    myFile << "Hello, World! :: ofstream" << endl;
}

void Files::ofstreamAppendOnExistingFile() {
    ofstream myFile;
    myFile.open("./my-ofstream-file.txt", ios::app);
    for (int i = 0; i<10; i++) {
        myFile << "Append! " << i << endl;
    }
    myFile.close();
}

void Files::ifstreamReadOnExistingFile() {
    ifstream myFile;
    myFile.open("./my-ofstream-file.txt", ios::in);
    string line;
    while (getline(myFile, line) ) {
        cout << line << endl;
    }
}


/**
 * Constructor
 */
Files::Files() {
    cout << "\n" << endl;
    cout << "================================" << endl;
    cout << "Files Constructor called." << endl;
    cout << "================================" << endl;
}

/**
 * Destructor
 */
Files::~Files() {
    cout << "\n" << endl;
    cout << "================================" << endl;
    cout << "Files Destructor called." << endl;
    cout << "================================" << endl;
}

