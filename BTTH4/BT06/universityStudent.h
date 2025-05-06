#pragma once
#include "studentUIT.h"

class universityStudent : public studentUIT
{
private:
    string thesis;
    double thesisScore;

public:
    universityStudent() : studentUIT()
    {
        this->thesis = "";
        this->thesisScore = 0;
    }

    void universityStudentInput();
    void universityStudentOutput() const;

    bool checkGraduationConditions() override;
};
