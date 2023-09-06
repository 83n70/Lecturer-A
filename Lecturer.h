//
// Created by Ben on 9/6/23
//

#ifndef LECTURER_LECTURER_H
#define LECTURER_LECTURER_H

#include <string>
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

    // Setters
    void setClass1(int class1)
    {
        this->class1 = class1;
    }
};

#endif //LECTURER_LECTURER_H

