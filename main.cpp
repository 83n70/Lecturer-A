#include "Lecturer.h"
#include <iostream>
using namespace std;

int main()
{
    vector<Lecturer> lecturers;
    getDataFromFile(lecturers);
    cout << "Size of vector: " << lecturers.size() << endl;

    return 0;
}
    