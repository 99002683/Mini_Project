#include "student.h"
#include "getQualification.h"
//#include "getStatus.h"
#include "studentdb.h"
#include <gtest/gtest.h>
namespace {

class QualificationDbTest : public ::testing::Test {

  protected:
    void SetUp() {
        qual.addStudent(1001,27000,90.4, 75.45, "Science", 88.6,"Sci&Tech");
        qual.addStudent(1002,28000,90.4, 75.46, "Science", 88.6,"Sci&Tech");
        qual.addStudent(1003,29000,90.4, 75.46, "Science", 88.6,"Sci&Tech");
        qual.addStudent(1004,30000,90.4, 75.46, "Science", 88.6,"Sci&Tech");
        qual.addStudent(1005,40000,90.4, 75.46, "Science", 88.6,"Sci&Tech");
        qual.addStudent(1006,44000,90.4, 75.46, "Science", 88.6,"Sci&Tech");
    }
    void TearDown() {}
    QualificationDb qual;
};

TEST_F(QualificationDbTest, AddTest) {
    qual.addStudent(1001,67000,90.4, 75.46, "Science", 88.6,"Sci&Tech");
    EXPECT_NE((StudentBase*)NULL, qual.findStudentById(1001));
    EXPECT_EQ(7, qual.countAll());
}
TEST_F(QualificationDbTest, RemoveTest) {
    qual.removeStudent(1002);
    EXPECT_EQ(NULL, qual.findStudentById(1002));
    EXPECT_EQ(5, qual.countAll());
}
TEST_F(QualificationDbTest, CountTest) {             //Just After Setup
    EXPECT_EQ(6, qual.countAll());
}
TEST_F(QualificationDbTest, CountByDegreeTypeTest) {  //Just After Setup
    int count = qual.countStudentByDegreeType("Sci&Tech");
    EXPECT_EQ(6, count);
}
TEST_F(QualificationDbTest, MaxSalaryTest) {           //Just After Setup
    double maxSalary = qual.computeMaxSalary();
    EXPECT_EQ(44000, maxSalary);
}
}
