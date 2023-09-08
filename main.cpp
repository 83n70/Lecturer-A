#include "Lecturer.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
using std::string;

int main()
{

    vector<Lecturer> lecturers;
    getDataFromFile(lecturers);
    cout << "Size of vector: " << lecturers.size() << endl;

    return 0;


    // // this is my stuff from watching lisa's video
    // ifstream inFile;
    // inFile.open("CS_Lecturers.csv");

    // string header;
    // if (inFile)
    // {
    //     cout << "File opened" << endl;
    //     getline(inFile, header);
    //     cout << header << endl;
    // }

    // string name = "N/A", office = "N/A";
    // int class1 = -1, class2 = -2, class3 = -3, class4 = -4;
    // char comma;
    // if (inFile)
    // {
    //     // Name
    //     getline(inFile, name, ',');
    //     cout << name << endl;

    //     // Office
    //     getline(inFile, office, ',');
    //     cout << office << endl;

    //     // Class1
    //     inFile >> class1;
    //     cout << class1 << endl;
    //     inFile >> comma;

    //     // Class2
    //     inFile >> class2;
    //     cout << class2 << endl;
    //     inFile >> comma;

    //     // Class3
    //     inFile >> class3;
    //     cout << class3 << endl;
    //     inFile >> comma;

    //     // Class4
    //     inFile >> class4;
    //     cout << class4 << endl;

    // }
    // inFile.close();




    // // this is my stuff from class
    // vector<Lecturer> lecturers;
    // ifstream inFile;
    // inFile.open("CS_Lecturers.csv");
    // string header;
    // string name = "n", office = "o", nothing = "n/a";
    // int class1 = -1, class2 = -2, class3 = -3, class4 = -4;
    // char comma;

    // if (inFile) {
    //     getline(inFile, header);
    //     cout << header <<endl;
    // }


    // while(inFile && inFile.peek() != EOF) {
    //     // Name
    //     getline(inFile, name, ',');
    //     cout << name <<endl;

    //     // Office
    //     getline(inFile, office, ',');
    //     cout << office <<endl;

    //     // Class 1
    //     inFile >> class1;
    //     cout << class1 << endl;
    //     inFile >> comma;

    //     // Class 2
    //     inFile >> class2;
    //     cout << class2 << endl;
    //     inFile >> comma;

    //     // Class 3
    //     inFile >> class3;
    //     if (!inFile) {
    //         // of there was no class4
    //         class3 = -1;
    //         inFile.clear();
    //     }
    //     cout << class3 << endl;
    //     inFile >> comma;

    //     // Class 4
    //     inFile >> class4;
    //     if (!inFile) {
    //         // of there was no class4
    //         class4 = -1;
    //         inFile.clear();
    //     } else {
    //         // consuming the newline char
    //         getline(inFile, nothing);
    //     }
    //     cout << class4 << endl;

    //     // initializes a lecturer object into the lecturers vector
    //     lecturers.push_back(Lecturer(name, office, class1, class2, class3, class4));
        


    // }
    // inFile.close();
    // return 0;
}
    