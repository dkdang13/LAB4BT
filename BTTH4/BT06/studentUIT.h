#pragma once
#include <iostream>
#include <string>
using namespace std;

class studentUIT
{
protected:
    string studentID;
    string studentName;
    string studentAddress;
    int courseCreditCompleted;
    double GPA;

public:
    studentUIT()
    {
        this->studentID = "";
        this->studentName = "";
        this->studentAddress = "";
        this->courseCreditCompleted = 0;
        this->GPA = 0;
    }

    void Input();
    void Output() const;

    int getCourseCreditCompleted();
    double getGPA();

    virtual bool checkGraduationConditions() = 0;
};
