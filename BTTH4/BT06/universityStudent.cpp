#include "universityStudent.h"
void universityStudent::universityStudentInput() {
    studentUIT::Input();
    cout << "Nhap Ten Luan Van: ";
    cin >> this->thesis;
    cout << "Nhap Diem Luan Van: ";
    cin >> this->thesisScore;
}

void universityStudent::universityStudentOutput() const {
    studentUIT::Output();
    cout << "Ten Luan Van: " << this->thesis << endl;
    cout << "Diem Luan Van: " << this->thesisScore << endl;
}

bool universityStudent::checkGraduationConditions() {
    if (this->getCourseCreditCompleted() > 145 && this->thesisScore > 5) {
        return true;
    }
    return false;
}