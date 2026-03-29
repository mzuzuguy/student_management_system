#include "getStundentDetails.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    Student s;

    // get name of the student
    string nameOfStudent;
    cout << "Please enter name of the student: " << endl;
    cin >> nameOfStudent; // get name of the student
    s.SetName(nameOfStudent);

    // get age of the student
    int ageOfStudent;
    cout << "How old is " << nameOfStudent << "?" << endl;
    cin >> ageOfStudent; // get age of the student
    s.SetAge(ageOfStudent);

    // get GPA of the student
    float gpaofStudent;
    cout << "Enter GPA: ";
    cin >> gpaofStudent; // get GPA of the student
    s.SetGPA(gpaofStudent);

    // get enrollment status of the student
    string enrollmentStatus;
    cout << "Is the student enrolled? (yes or no): ";
    cin >> enrollmentStatus; // get enrollment status of the student
    bool isEnrolled;
    if (enrollmentStatus == "yes")
    {
        isEnrolled = true;
        cout << "Student enrolled successfully." << endl;
    }
    else if (enrollmentStatus == "no")
    {
        isEnrolled = false;
    }
    else
    {
        cout << "Invalid input for enrollment status. Please enter 'yes' or 'no'." << endl;
    }
    s.SetEnrolled(isEnrolled);

    // create a  file to store the student details.
    ofstream file("student_infor.txt");
    file << "Name of Student: " << nameOfStudent << endl;
    file << "Age of Student: " << ageOfStudent << endl;
    file << "GPA of Student: " << gpaofStudent << endl;

    // close the file
    file.close();

    return 0;
}
