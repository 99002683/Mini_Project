#ifndef __GETQUALIFICATION_H
#define __GETQUALIFICATION_H
#include "student.h"
#include<iostream>
using namespace std;

class Qualification: public StudentBase {
    double ssc_per;
    double hsc_per;
    string hsc_type;
    double degree_per;
    string degree_type;
  public:
    Qualification();
    Qualification(int, double, double, double,string,double,string);
    double credit(double) override;
    double debit(double) override;
    double getSscPercentage();
    double getHscPercentage();
    string getHscType();
    double getDegreePercentage();
    string getDegreeType();
    int getIdS();
};


#endif // GETQUALIFICATION_H_INCLUDED
