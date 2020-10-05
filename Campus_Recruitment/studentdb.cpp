#include "student.h"
#include "getQualification.h"
//#include "getStatus.h"
#include "studentdb.h"
#include <list>
#include <iterator>
#include <iostream>
using namespace std;

void QualificationDb::addStudent(int sid, double sal, double s_per, double h_per, string h_type,double d_per,string d_type)
{
    qual.push_back(Qualification(sid,sal, s_per,h_per,h_type,d_per,d_type));
}
int QualificationDb::countAll()
{
    return qual.size();
}
Qualification* QualificationDb::findStudentById(int id) {
    std::list<Qualification> :: iterator iter;
    for(iter=qual.begin(); iter!=qual.end(); iter++) {
        if (id == iter->getIdS()) {
            return &(*iter);
        }
    }
    return NULL;
}
void QualificationDb::removeStudent(int id)
{
    std::list<Qualification> :: iterator iter;
    for(iter=qual.begin(); iter!=qual.end(); iter++) {
        if (iter->getIdS() == id) {
            qual.erase(iter);
            break;
        }
    }
}
int QualificationDb::countStudentByDegreeType(string DegreeType)
{
    int count=0;
    std::list<Qualification> :: iterator iter;
    for(iter=qual.begin(); iter!=qual.end(); iter++) {
        if (iter->getDegreeType() == DegreeType)
            count++;
    }
    return count;
}

double QualificationDb::computeMaxSalary() {
    std::list<Qualification> :: iterator iter = qual.begin();
    double maxSalary = iter->getSalary();
    iter++;
    for(; iter!= qual.end(); ++iter) {
        if(maxSalary < iter->getSalary()) {
            maxSalary = iter->getSalary();
        }
    }
    return (maxSalary);
}
