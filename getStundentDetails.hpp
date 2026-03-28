#pragma once
#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string mName;
        int mAge; 
        float mGPA;
        bool mEnrolled;

    public: 
        // Constructor
        Student(){
        mName = "";
        mAge = 0;
        mGPA = 0.0f;
        mEnrolled = false;
     }

        // setters
        void SetName(string newName){
            mName = newName;
        }
        void SetAge(int newAge){
            mAge = newAge;
        }
        void SetGPA(float newGPA){
            mGPA = newGPA;
        }
        void SetEnrolled(bool status){
            mEnrolled = status;
        }

        // Getters
        string GetName() const {
            return mName;
        }

        int GetAge() const{
            return mAge;
        }
        float GetGPA() const{
            return mGPA;
        }
        bool GetEnrolled() const{
            return mEnrolled;
        }
          
        //Display
        void DisplayInfo() const{
            cout << "Name: " << mName << endl;
            cout << "Age: " << mAge << endl;
            cout << "GPA: " << mGPA << endl;
            cout << "Enrolled: " << (mEnrolled ? "Yes" : "No") << endl;
        }
};