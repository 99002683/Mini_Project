#include<iostream>
#include "getQualification.h"
using namespace std;

Qualification::Qualification():
    ssc_per(0.0), hsc_per(0.0), hsc_type(""),degree_per(0.0),degree_type("") {}
Qualification::Qualification(int sid, double sal, double s_per, double h_per, string h_type,double d_per,string d_type):
    StudentBase(sid, sal),ssc_per(s_per), hsc_per(h_per), hsc_type(h_type),degree_per(d_per),degree_type(d_type) {}

int Qualification::getIdS() {
    int res = StudentBase::getId();
    return res;
}

double Qualification::getSscPercentage() {
    return ssc_per;
}
double Qualification::getHscPercentage() {
    return hsc_per;
}
string Qualification::getHscType() {
    return hsc_type;
}
double Qualification::getDegreePercentage() {
    return degree_per;
}

string Qualification::getDegreeType() {
    return degree_type;
}

double Qualification::credit(double amt) {
    double sal = StudentBase::getSalary();
    sal += amt;
    StudentBase::setSalary(sal);
    return sal;
}
double Qualification::debit(double amt) {
    double sal = StudentBase::getSalary();
    sal -= amt;
    StudentBase::setSalary(sal);
    return sal;
}
