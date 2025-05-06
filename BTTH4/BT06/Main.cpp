#include "collegesStudent.h"
#include "universityStudent.h"
#include <vector>

int main() {
    int n, m;
    vector<universityStudent> U;
    vector<collegesStudent> C;
    cout << "Nhap So Luong Sinh Vien Dai Hoc: ";
    cin >> n;
    for (int i = 0; i < n ; i++) {
        universityStudent A;
        A.universityStudentInput();
        U.push_back(A);
    }
    cout << "Nhap So Luong Sinh Vien Cao Dang: ";
    cin >> m;
    for (int i = 0; i < m; i++) {
        collegesStudent A;
        A.collegesStudentInput();
        C.push_back(A);
    }
    cout << "-----------------------------------------------" << endl;
    cout << "Xuat Danh Sach Sinh Vien: " << endl;
    for (universityStudent item: U) {
        item.universityStudentOutput();
    }
    for (collegesStudent item: C) {
        item.collegesStudentOutput();
    }
    cout << "-----------------------------------------------" << endl;
    cout << "Xuat Danh Sach Sinh Vien Du Dieu Kien Tot Nghiep: " << endl;
    vector<universityStudent> A;
    vector<collegesStudent> D;
    for (universityStudent item: U) {
        if (item.checkGraduationConditions()) {
            item.universityStudentOutput();
        } else {
            A.push_back(item);
        }
    }
    for (collegesStudent item: C) {
        if (item.checkGraduationConditions()) {
            item.collegesStudentOutput();
        } else {
            D.push_back(item);
        }
    }
    cout << "-----------------------------------------------" << endl;
    cout << "Xuat Danh Sach Sinh Vien Khong Du Dieu Kien Tot Nghiep: " << endl;
    for (universityStudent item: A) {
        item.universityStudentOutput();
    }
    for (collegesStudent item: D) {
        item.collegesStudentOutput();
    }
    cout << "-----------------------------------------------" << endl;
    cout << "Sinh Vien Dai Hoc Co Diem Trung Binh Cao Nhat: " << endl;
    double score = U[0].getGPA();
    universityStudent tmp = U[0];
    for (int i = 0 ; i < n;  i++) {
        if (score < U[i].getGPA()) {
            score = U[i].getGPA();
            tmp = U[i];
        }
    }
    tmp.universityStudentOutput();
    return 0;
}