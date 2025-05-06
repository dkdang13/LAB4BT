#include "collegesStudent.h"

void collegesStudent::collegesStudentInput() {
    studentUIT::Input();
    cout << "Nhap Diem Tot Nghiep: ";
    cin >> this->graduationScore;
}

void collegesStudent::collegesStudentOutput() const {
    studentUIT::Output();
    cout << "Diem Tot Nghiep: " << this->graduationScore << endl;
}

bool collegesStudent::checkGraduationConditions() {
    if (this->getCourseCreditCompleted() > 110 && this->graduationScore > 5) {
        return true;
    }
    return false;
}
