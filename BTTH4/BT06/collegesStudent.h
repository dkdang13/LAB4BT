#pragma once
#include "studentUIT.h"

class collegesStudent: public studentUIT {
    private:
        double graduationScore;
    public:
        collegesStudent() : studentUIT() {
            this->graduationScore = 0;
        }
    
        void collegesStudentInput();
        void collegesStudentOutput() const;
    
        bool checkGraduationConditions() override;
    };