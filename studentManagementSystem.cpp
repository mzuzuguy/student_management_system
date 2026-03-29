#include "getStundentDetails.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    Student s;

    //get name of the student
    string nameOfStudent;
    cout << "Please enter name of the student: " << endl;
    cin >> nameOfStudent; //get name of the student 
    s.SetName(nameOfStudent);

    //get age of the student 
    int ageOfStudent;
    cout << "How old is " << nameOfStudent << "?" << endl;
    cin >> ageOfStudent;//get age of the student 
    s.SetAge(ageOfStudent);

    //get GPA of the student
    float gpaofStudent;
    cout << "Enter GPA: ";
    cin >> gpaofStudent;//get GPA of the student 
    s.SetGPA(gpaofStudent);

    //create a  file to store the student details.
    ofstream file("student_infor.txt");
    file << "Name of Student: " <<nameOfStudent << endl;
    file << "Age of Student: " << ageOfStudent << endl;
    file << "GPA of Student: " << ;

    //close the file
    file.close();

    return 0;
}

