#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <iostream>
using namespace std;

enum Gender {
    Male,
    Female
};
class StudentBase {
    int m_studId;
    double m_salary;
    Gender g_type;
  public:
    StudentBase();
    StudentBase(int, double);
    virtual double credit(double)=0;
    virtual double debit(double)=0;
    int getId();
    double getSalary();
    void setSalary(double);
};

#endif
