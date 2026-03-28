#include "getStundentDetails.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    Student s;
    string nameOfStudent;
    cout << "Please enter name of the student: " << endl;
    cin >> nameOfStudent; //get name of the student 
    s.SetName(nameOfStudent);

    int ageOfStudent;
    cout << "How old is " << nameOfStudent << "?" << endl;
    cin >> ageOfStudent;//get age of the student 
    s.SetAge(ageOfStudent);

    return 0;
}

