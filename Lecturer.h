//
// Created by Ben on 9/6/23
//

#ifndef LECTURER_LECTURER_H
#define LECTURER_LECTURER_H

#include <fstream>
#include <string>
#include <vector>
using std::ifstream, std::string, std::vector;

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

// The ampersand means the vector is passed in by reference.
void getDataFromFile(vector<Lecturer>& lecturers) {
        ifstream inFile;
    inFile.open("CS_Lecturers.csv");

    string header;
    if (inFile)
    {
        getline(inFile, header);
    }

    string name = "N/A", office = "N/A", nothing;
    int class1 = -1, class2 = -2, class3 = -3, class4 = -4;
    char comma;
    while (inFile && inFile.peek() != EOF)
    {
        // Name
        getline(inFile, name, ',');

        // Office
        getline(inFile, office, ',');

        // Class1
        inFile >> class1;
        inFile >> comma;

        // Class2
        inFile >> class2;
        inFile >> comma;

        // Class3
        inFile >> class3;
        if (!inFile)
        {
            // there was no class 4 for this entry
            class3 = -1;
            inFile.clear();
        }
        inFile >> comma;

        // Class4
        inFile >> class4;
        if (!inFile)
        {
            // there was no class 4 for this entry
            class4 = -1;
            inFile.clear();
        } else {
            // read newline char at end of the line
            // NOTE: only have to do this if the dataset ends with a numerical column
            // using getline without 3rd arg will stop at a newline char
            getline(inFile, nothing);
        }

        // Put the data from this line in the file into a lecturer object
        // and add the object to the vector
        lecturers.push_back(Lecturer(name, office, class1, class2, class3, class4));
    }
    inFile.close();
}

#endif //LECTURER_LECTURER_H

