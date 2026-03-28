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
//crazy how this works, I thought I would have to use a pointer to set the age of the student but it works without it, I guess the setter function is doing that for me behind the scenes
    return 0;
}

