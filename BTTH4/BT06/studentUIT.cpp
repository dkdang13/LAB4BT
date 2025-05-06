#include "studentUIT.h"

void studentUIT::Input() {
    cout << "Nhap Ma So Sinh Vien: ";
    cin >> this->studentID;
    cout << "Nhap Ten Sinh Vien: ";
    cin >> this->studentName;
    cout << "Nhap Dia Chi: ";
    cin >> this->studentAddress;
    cout << "Nhap So Tin Chi Da Hoan Thanh: ";
    cin >> this->courseCreditCompleted;
    cout << "Nhap Diem Trung Binh: ";
    cin >> this->GPA;
}

void studentUIT::Output() const {
    cout << "Ma So Sinh Vien: " << this->studentID << endl;
    cout << "Ten Sinh Vien: " << this->studentName << endl;
    cout << "Dia Chi: " << this->studentAddress << endl;
    cout << "So Tin Chi Da Hoan Thanh: " << this->courseCreditCompleted << endl;
    cout << "Diem Trung Binh: " << this->GPA << endl;
}

int studentUIT::getCourseCreditCompleted() {
    return this->courseCreditCompleted;
}

double studentUIT::getGPA() {
    return this->GPA;
}
