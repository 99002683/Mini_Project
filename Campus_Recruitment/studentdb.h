#ifndef STUDENTDB_H_INCLUDED
#define STUDENTDB_H_INCLUDED
#include<list>
#include<iterator>

class QualificationDb {
    std::list<Qualification> qual;

  public:
    void addStudent(int,double,double,double,string,double,string);
    Qualification* findStudentById(int);
    int countAll();
    void removeStudent(int);
    int countStudentByDegreeType(string);
    double computeMaxSalary();
};
#endif // STUDENTDB_H_INCLUDED
