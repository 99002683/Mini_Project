#include "student.h"
#include <iostream>
using namespace std;

StudentBase::StudentBase():
    m_studId(0), m_salary(0) {}
StudentBase::StudentBase(int sid, double sal):
    m_studId(sid), m_salary(sal) {}

int StudentBase::getId()
 {
     return m_studId;
 }
double StudentBase::getSalary()
{
    return m_salary;
}
void StudentBase::setSalary(double sal)
{
    m_salary += sal;
}
