//
// Created by Ben on 9/6/23
//

#ifndef LECTURER_LECTURER_H
#define LECTURER_LECTURER_H

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
using std::string;

class Lecturer
{
private:
    int class1, class2, class3, class4;
    string name, office;

public:
    // Constructors
    Lecturer()
    {
        class1 = class2 = class3 = class4 = 1000;
        name = "Jane Doe";
        office = "Innovation E220";
    }

    Lecturer(string name, string office, int class1, int class2, int class3, int class4)
    {
        this->name = name;
        this->office = office;
        this->class1 = class1;
        this->class2 = class2;
        this->class3 = class3;
        this->class4 = class4;
    }

    // Getters
    string getName() const
    {
        return name;
    }

    string getOffice() const
    {
        return office;
    }

    int getClass1() const
    {
        return class1;
    }

    int getClass2() const
    {
        return class2;
    }

    int getClass3() const
    {
        return class3;
    }

    int getClass4() const
    {
        return class4;
    }

    // Setters
    void setName(string name)
    {
        this->name = name;
    }

    void setOffice(string office)
    {
        this->office = office;
    }

    void setClass1(int class1)
    {
        this->class1 = class1;
    }

    void setClass2(int class2)
    {
        this->class2 = class2;
    }

    void setClass3(int class3)
    {
        this->class3 = class3;
    }

    void setClass4(int class4)
    {
        this->class4 = class4;
    }

};

void getDataFromFile(vector<Lecturer>& lecturers) {

    ifstream inFile;
    inFile.open("CS_Lecturers.csv");
    string header;

    if (inFile) {
        getline(inFile, header);
        cout << header << endl;
    }

    string name = "n/a", office = "n/a", nothing;
    int class1 = -1, class2 = -2,class3 = -3,class4 = -4;
    char comma;

    while (inFile && inFile.peek() != EOF) {
        // Name
        getline(inFile, name, ',');
        cout << name << endl;

        // Office
        getline(inFile, office, ',');
        cout << office << endl;

        // Class 1
        inFile >> class1;
        cout << class1 << endl;
        inFile >> comma;

        // Class 2
        inFile >> class2;
        cout << class2 << endl;
        inFile >> comma;

        // Class 3
        inFile >> class3;
        if (!inFile) {
            // if there was no class3
            class3 = -1;
            inFile.clear();
        }
        cout << class3 << endl;
        inFile >> comma;

        // CLass 4
        inFile >> class4;
        if (!inFile) {
            // if there was no class4
            class4 = -1;
            inFile.clear();
        } else {
            // Read the newline character at the end of the line
            // Note: we only have to do this if csv line end with numerical column

            // using getline without a delimiter (third argument) will stop after
            // consuming newline

            getline(inFile,nothing);
        }
        cout << class4 << endl;

        // put the data from thsi liune of the file into a lecturer object

        lecturers.push_back(Lecturer(name,office,class1,class2,class3,class4));

    }

    inFile.close();
}

#endif //LECTURER_LECTURER_H

